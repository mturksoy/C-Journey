#include <iostream>
#include <vector>

using namespace std;

int main() {

	bool done{ false };
	int number{};

	while (!done) {
		cout << "1-) Enter an integer between 1 and 5: ";
		cin >> number;

		if (number <= 1 || number >= 5)
			cout << "Try again! Out of range!" << endl;
		else {
			cout << "Thanks!" << endl;
			done = true;
		}
	}

	int number1{};
	do
	{
		cout << "2-) Enter a integer between 1 and 5: ";
		cin >> number1;

	} while (number1 <= 1 || number1 >= 5);

	cout << "Thanks!" << endl;

	char selection{};

	do
	{
		double width{}, height{};
		cout << "3-) Enter width and height seperated by a space: ";
		cin >> width >> height;

		double area = width * height;
		cout << "The area is " << area << endl;

		cout << "Dou you wanna calculate another one? (Y/N): ";
		cin >> selection;

	} while (selection == 'Y' || selection == 'y');

	cout << "Thanks!" << endl;

	cout << "************ Multiplaciton Table **********************" << endl;

	for (int num1{ 1 }; num1 <= 10; num1++) {
		for (int num2{ 1 }; num2 <= 10; num2++) {
			cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
		}
		cout << "-----------------------" << endl;
	}

	cout << "*************************************" << endl;

	vector <vector <int>> vector_2d{
		{1,2,3},
		{10,20,30,40},
		{100,200,300,400,500}
	};

	for (auto vec : vector_2d) {
		for (auto val : vec) {
			cout << val << " ";
		}
		cout << endl;
	}

	int num_items{};

	cout << "How many items dou you have?: ";
	cin >> num_items;

	vector <int> data{};

	for (int i{ 1 }; i <= num_items; i++) {
		int data_items;
		cout << "Enter item " << i << " : ";
		cin >> data_items;

		data.push_back(data_items);
	}

	cout << "Displaying histogram" << endl;

	for (auto val : data) {
		for (int i{ 1 }; i <= val; i++) {
			if (i %5 == 0)
			{
				cout << "*";
			}else
			cout << "-";
		}
		cout << endl;
	}

	return 0;
}