#include <iostream>

using namespace std;

int main() {

	int* int_ptr{nullptr};
	int_ptr = new int;  // this variable at the heap. and only way access that is using the pointer
	cout << int_ptr << endl;
	delete int_ptr;  //frees up to storage


	size_t size{};
	double* array_size_ptr{ nullptr };

	cout << "How many array element do you want to storage: ";
	cin >> size;

	array_size_ptr = new double[size];

	cout << array_size_ptr << endl;  // addres of the first array element

	delete[] array_size_ptr;

	return 0;
}