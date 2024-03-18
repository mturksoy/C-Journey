#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int a);
void pass_by_value2(string s);
void pass_by_value3(vector <string> s);
void print_vector(vector <string> s);


void pass_by_value1(int a) {
	a = 1000;
}

void pass_by_value2(string s) {
	s = "Changed";
}

void pass_by_value3(vector <string> s) {
	s.clear();   //all vector cleaned
}

void print_vector(vector<string> s) {
	for(auto vec: s) {
		cout << vec << " ";
	}
}

int main() {

	int num{ 10 };

	cout << "num is before calling the function: " << num << endl;
	pass_by_value1(num);

	cout << "num is after calling the function: " << num << endl;

	cout << "**********************************" << endl;

	string str{ "Kayra" };

	cout << "str is before calling the function: " << str << endl;
	pass_by_value2(str);

	cout << "str is after calling the function: " << str << endl;

	cout << "**********************************" << endl;

	vector <string> str_vec{ "Kayra" , "Damla" };

	cout << "str_vec is before calling the funciton: ";
	print_vector(str_vec);
	cout << endl;

	pass_by_value3(str_vec);

	cout << "str_vec is after calling the funciton: ";
	print_vector(str_vec);
	cout << endl;

	return 0;
}