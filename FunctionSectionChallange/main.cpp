#include <iostream>
#include <vector>

using namespace std;

void print_list(const vector <int> vec);
void print_the_menu();
double vectors_mean(vector <double> vec);
double vectors_smallest_number(vector <double> vec);
double vectors_largest_number(vector <double> vec);
void add_number(vector <double> &vec, double value);
void finding_the_number(vector <double> vec, double number);


void print_the_menu() {
	cout << "P - Print numbers" << endl;
	cout << "A - Add a number" << endl;
	cout << "M - Display mean of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "P - Display the largest number" << endl;
	cout << "F - Find a number" << endl;
	cout << "Q - Quit" << endl << endl;
	cout << "Enter your choice: ";

}

void print_list(const vector <double> vec) {
	if (vec.size() == 0) {
		cout << "Sorry Thre is no data in the vector !!!" << endl << endl;
	}
	else {
		cout << "Printing the vector: ";
		for (auto c : vec)
			cout << c << " ";
		cout << endl << endl;
	}
}

void add_number(vector <double> &vec, double value) {

	vec.push_back(value);
}

double vectors_mean(vector <double> vec) {
	if (vec.size() == 0) {
		cout << "Sorry there is no data in the vector !!!" << endl << endl;
	}
	else {
		double total{ 0 };
		for (size_t i{ 0 }; i < vec.size(); i++)
			total += vec[i];
		return total / vec.size();
	}
}

double vectors_smallest_number(vector <double> vec) {
	
	double a = vec[0];

	for (size_t i{ 0 }; i < vec.size(); i++) {
		if (a > vec[i])
				a = vec[i];
	}
	return a;
}

double vectors_largest_number(vector <double> vec) {
	
	double a = vec[0];

	for (size_t i{ 0 }; i < vec.size(); i++) {
		if (a < vec[i])
				a = vec[i];
	}
	return a;

}

void finding_the_number(vector <double> vec, double number) {

	for (size_t i{ 0 }; i < vec.size(); i++) {
		if (vec[i] == number)
			cout << "Number found !!! " << number << " is " << i+1 << ". number in the vector." << endl << endl;
	}
	cout << "Sorry that number is not in this vector !!!" << endl << endl;

}



int main() {

	vector <double> vec{};
	string selection{};
	
	cout << "!!! Welcome to Vector Calc Library !!!" << endl << endl;

	for (;;) {
		print_the_menu();
		cin >> selection;



		if (selection == "P" || selection == "p") {
			print_list(vec);
		}

		else if (selection == "A" || selection == "a") {
			double number_to_add{};

			cout << "Which doubler number do you want to add to vector: ";
			cin >> number_to_add;

			add_number(vec, number_to_add);
			cout << "Number added" << endl << endl;
		}

		else if (selection == "M" || selection == "m") {
			if (vec.size() != 0)
			cout << "The Vector's mean is: " << vectors_mean(vec) << endl << endl;
			else
				cout << "Sorry there is no data in the vector !!!" << endl << endl;
		}

		else if (selection == "S" || selection == "s") {
			if (vec.size() != 0)
				cout << "The smallest number in the vector is: " << vectors_smallest_number(vec) << endl << endl;
			else
				cout << "Sorry there is no data in the vector !!!" << endl << endl;
		}

		else if (selection == "L" || selection == "l") {
			if (vec.size() != 0)
				cout << "The largest number in the vector is: " << vectors_largest_number(vec) << endl << endl;
			else
				cout << "Sorry there is no data in the vector !!!" << endl << endl;

		}
		else if (selection == "F" || selection == "f") {


			if (vec.size() != 0) {

				double number_to_find{};

				cout << "Which number do you want to find: ";
				cin >> number_to_find;

				finding_the_number(vec, number_to_find);
			}
			else
				cout << "Sorry there is no data in the vector !!!" << endl << endl;


		}
		 
		else if (selection == "Q" || selection == "q")
			break;

		else
			cout << "Wrong choice try again !!!" << endl << endl;

	} 

	cout << "Goodbye take care yourself..." << endl;
	cout << "Program closed...";


	//char get_selection(){
	// char selection ();
	// cin >> selection;
	// return toupper(selection);    ----->> converting char to uppercase 
	// }

	return 0;
}