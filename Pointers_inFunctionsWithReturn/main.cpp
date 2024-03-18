#include <iostream>

using namespace std;

int* create_array(size_t size, int value = 0);
void display_array(const int* const arr, int size);


int* create_array(size_t size, int value) {
	int* new_array{ nullptr };
	new_array = new int[size];

	for (size_t i{ 0 }; i < size; i++) 
		new_array[i] = value;  //*(new_array + i) that can happen like that
	return new_array;
}

void display_array(const int* const arr ,int size) {
	for (size_t i{ 0 }; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main() {
	size_t size{};
	int value{};
	
	cout << "How many integers would you like to allocate : ";
	cin >> size;

	cout << "What value would you like to initilaize: ";
	cin >> value;

	int* my_arr = create_array(size,value);

	display_array(my_arr, size);

	delete[] my_arr;

	return 0;
}