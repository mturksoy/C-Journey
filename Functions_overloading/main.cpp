#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(int a);   // Don't use Default Argument Values in everywhere like **void print(int = 100;
void print(double a);                                                      //**void print(double a);
void print(string a);													   //When this is happened compiler can't decide which one use
void print(string, string);												   //And it's generate an error
void print(vector<string>);

void print(int a) {
	cout << "Printing int: " << a << endl;
}
void print(double a) {
	cout << "Printing double: " << a << endl;
}
void print(string a) {
	cout << "Printing string: " << a << endl;
}
void print(string a, string b) {
	cout << "Printing 2 string: " << a << " and " << b << endl;
}
void print(vector<string> v) {
	cout << "Printing vector of string: " << endl;

	for (auto c : v) {
		cout << c << endl;
	}
}


int main() {

	print(5);
	print('A');  //Character is always promoted to int value print 65 ASCII 'A'

	print(25.3);  //double
	print(15.7f); // float is promoted to double 

	print("Merhaba");  // C style string is promoted to C++ string
	
	string s{ "C++ style string" };
	print(s);

	vector <string> vec{ "Damla", "Kayra" };
	print(vec);


	return 0;
}