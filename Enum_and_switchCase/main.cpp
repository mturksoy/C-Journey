#include <iostream>

using namespace std;

int main() {

	enum harf_notlari {
		A, B, C, D, E, F
	};

	char grade{};

	cout << "Please enter your grade (A,B,C,D,E or F): ";
	cin >> grade;

	switch (grade) {

		case 'A': 
			cout << "A";
			break;

		case 'B':
			cout << "B";
			break;

		case 'C':
			cout << "C";
			break;

		case 'D':
			cout << "D";
			break;

		case 'E':
			cout << "E";
			break;

		case 'F':
			cout << "F";
			{
				char confirm{};

				cout << "R u sure? Dou u wanna take F (Y/N): ";
				cin >> confirm;

				if (confirm == 'Y')
					cout << "OK";
				else
					cout << "Then WORK";
			}
			break;

		default:
			cout << "Wrong entry try again !!!";
	}

	int number{};

	cout << "Enter a number: ";
	cin >> number;

	cout << number << " is " << ((number % 2 == 0) ? "even" : "odd");

	return 0;
}