#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int num{ 10 };
	
	cout << "Value of num is: " << num << endl;
	cout << "Size of num is: " << sizeof(num) << endl;
	cout << "Adress of num is: " << &num << endl;

	cout << "****************************" << endl;

	int* p{ nullptr };

	cout << "Value of p is: " << p << endl;
	cout << "Adress of p is: " << &p << endl;
	cout << "Sizeof of num is: " << sizeof(p) << endl;

	cout << "****************************" << endl;

	int* p1{};
	double* p2{};
	unsigned long long* p3{};
	vector <string>* p4{};
	string* p5{};

	cout << "Sizeof of p1 is: " << sizeof(p1) << endl;
	cout << "Sizeof of p2 is: " << sizeof(p2) << endl;
	cout << "Sizeof of p3 is: " << sizeof(p3) << endl;
	cout << "Sizeof of p4 is: " << sizeof(p4) << endl;
	cout << "Sizeof of p5 is: " << sizeof(p5) << endl;

	cout << "****************************" << endl;

	int score{ 15 };
	double temperature{ 80.5 };

	p = &score;

	cout << "Adress of score is: " << p << endl;
	cout << "Adress of score is: " << &score << endl;

	// p = &temperature;  // compile error because p is a int pointer not a double pointer.



	return 0;
}