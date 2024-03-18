#include <iostream>

using namespace std;

int main() {

	int total_amount{ 100 };
	int total_number{ 8 };
	double average{ 0.0 };

	average = total_amount / total_number;
	cout << average << endl;   //displays 12

	average = static_cast <double> (total_amount) / total_number;
	cout << average << endl;   //displays 12.5

	const int count = { 3 };
	cout << "Hii there!\nPlease enter 3 number: ";
	int number1 = { 0 }, number2 = { 0 }, number3 = { 0 };
	cin >> number1 >> number2 >> number3;

	int total = number1 + number2 + number3;
	double average_2 = total / count;

	cout << "These 3 numbers are: " << number1 << "," << number2 << " and " << number3 << endl;

	cout << "These 3 number's average is: " << average_2 << endl;

	average_2 = static_cast <double> (total) / count;
	cout << average_2;

	return 0;
}