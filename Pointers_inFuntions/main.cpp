#include <iostream>
#include <vector>

using namespace std;

void double_data(int* int_ptr);
void swap_variables(double* a, double* b);
void display_vector(const vector<string>* const vec);
void display_array(int* array, int sentinel);


void double_data(int* int_ptr) {
	*int_ptr *= 2;
}

void swap_variables(double* a, double* b) {
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}

void display_vector(const vector<string>* const vec) {
	// (*vec).at(0) = "Omg";   first Const
	for (auto c : *vec)
		cout << c << " ";
	cout << endl;
	// vec = nullptr;   second const
}

void display_array(int* array, int sentinel) {
	while (*array != sentinel)
		cout << *array++ << " ";
	cout << endl;
}

int main() {

	int value{ 10 };
	int* int_ptr{ nullptr };

	cout << "The value before the funciton: " << value << endl;
	double_data(&value);
	cout << "The value after the function: " << value << endl;

	cout << "--------------------------" << endl;

	int_ptr = &value;

	cout << "The value before the funciton: " << value << endl;
	double_data(int_ptr);
	cout << "The value after the function: " << value << endl;

	cout << "--------------------------" << endl;

	double* a_ptr{ nullptr }, *b_ptr{ nullptr };

	a_ptr = new double;
	b_ptr = new double;

	*a_ptr = 7582;
	*b_ptr = 3564;

	cout << "Variables before the swap process: a_ptr: " << *a_ptr << " b_ptr: " << *b_ptr << endl;

	swap_variables(a_ptr, b_ptr);

	cout << "Variables after the swap process: a_ptr: " << *a_ptr << " b_ptr: " << *b_ptr << endl;

	delete a_ptr, b_ptr;

	cout << "--------------------------" << endl;

	vector <string>* string_ptr{ nullptr };

	string_ptr = new vector <string>;

	*string_ptr = { "James","Jhon","Max" };

	display_vector(string_ptr);

	cout << string_ptr->at(0) << endl;
	cout << (*string_ptr).at(0) << endl;

	cout << "--------------------------" << endl;

	/*int* array_ptr{nullptr};
	array_ptr = new int[5];

	array_ptr[0] = { 85 };
	array_ptr[1] = { 17 };
	array_ptr[2] = { 45 };
	array_ptr[3] = { 79 };
	array_ptr[4] = { -1 };

	display_array(array_ptr, -1);*/

	int scores[]{ 74,46,25,19,-1 };
	display_array(scores, -1);


	
	return 0;
}