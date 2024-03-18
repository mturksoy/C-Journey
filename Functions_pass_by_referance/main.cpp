#include <iostream>
#include <vector>
#include <string>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector <string> &v);
void print_vector(const vector<string>& v);// const

void pass_by_ref1(int& num) {
	num = 100;
}

void pass_by_ref2(string& s) {
	s = "Kayra";
}

void pass_by_ref3(vector <string>& v) {  // Clearing the vector
	v.clear();

}

void print_vector(const vector<string>& v) {// const
	for (auto a : v) 
		cout << a << " ";
	cout << endl;
}

int main() {

	int num{ 197 };

	cout << "Num is before the calling pass_by_referace function: " << num << endl;
	pass_by_ref1(num);

	cout << "Num is after the calling pass_by_referace function: " << num << endl;

	cout << "***************************************************" << endl;


	string s{ "Damla" };

	cout << "String is before the calling pass_by_referace function: " << s << endl;
	pass_by_ref2(s);

	cout << "String is after the calling pass_by_referace function: " << s << endl;

	cout << "***************************************************" << endl;


	vector <string> vec{ "Damla" , "Kayra" };

	cout << "Vector is before the calling pass_by_referace function: ";
	print_vector(vec);

	pass_by_ref3(vec);

	cout << "Vector is after the calling pass_by_referace function: ";
	print_vector(vec);

	return 0;
}