#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> nums{};
	char selection{};

	do {
		cout << "\nP - Print numbers\n" <<
			"A - Add a number\n" <<
			"M - Display the mean of the numbers\n" <<
			"S - Display the smallest number\n" <<
			"L - Display the largest number\n" <<
			"C - Clear the list\n" <<
			"Enter your choice: ";
		cin >> selection;
		
		cout << "**********************************" << endl;

		if (selection == 'P' || selection == 'p') {
			if (nums.size() == 0) {
				cout << "[] - the list is empty" << endl;
			}
			else {
				cout << "[ ";
				for (auto val : nums) {
					cout << val << " ";
				}
				cout << "]";

			}
		}

		else if (selection == 'A' || selection == 'a') {
			int number;
			cout << "Enter an integer to add to the list: ";
			cin >> number;

			nums.push_back(number);
			cout << number << " added";
		}

		else if(selection == 'M' || selection == 'm') {

			if (nums.size() == 0) {
				cout << "The list is empty! There is no mean!";
			}
			else {
				
				double total{};

				for (auto val : nums) {
					total += val;
				}
				cout << "Mean is: " << total / nums.size();
			}
		}

		else if(selection == 'S' || selection == 's') {

			if (nums.size() == 0) {
				cout << "The list is empty! There is no number!";
			}
			else {
				int a{nums.at(0)};

				for (int i{ 1 }; i < nums.size(); i++) {
					if (nums.at(i) < a) {
						a = nums.at(i);
					}
				}
				cout << "Smallest number in the list is: " << a;
			}

		}

		else if(selection == 'L' || selection == 'l') {
			if (nums.size() == 0) {
				cout << "The list is empty! There is no number!";
			}
			else {
				int a{ nums.at(0) };

				for (int i{ 1 }; i < nums.size(); i++) {
					if (nums.at(i) > a) {
						a = nums.at(i);
					}
				}
				cout << "Largest number in the list is : " << a;
			}
		}

		else if(selection == 'C' || selection == 'c') {
			nums.clear();
				cout << "The list is cleared!";
		}

		else if (selection == 'Q' || selection == 'q') {
			
			cout << "Goodbye!!!";

		}

		else
			cout << "Wrong option! Try again!\n";


	} while (selection != 'q' && selection != 'Q');

	return 0;
}