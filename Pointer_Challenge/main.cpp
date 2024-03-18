#include <iostream>

using namespace std;

void print_array(const int* const arr, size_t size);
int* apply_all(int* arr1, size_t size1, int* arr2, size_t size2);


void print_array(const int* const arr, size_t size) {
	cout << "[ ";
	for (size_t i{ 0 }; i < size; i++)
		cout << *(arr + i) << " ";
	cout << " ]";
	cout << endl;
}

int* apply_all(int* arr1, size_t size1, int* arr2, size_t size2) {

	int* dif_multi_array{ nullptr };

	dif_multi_array = new int[size1 * size2];
	int k{ 0 };

	for (size_t i{ 0 }; i < size1; i++) {
		for (size_t j{ 0 }; j < size2; j++) {
			dif_multi_array[k] = arr1[i] * *(arr2 + j);
			k++;
		}
	}

	return dif_multi_array;
}


int main() {

	int arr1[]{ 10,20,30,40,50 };
	int arr2[]{ 1,2,3,4 };

	cout << "Arrey 1 is: ";
	print_array(arr1, sizeof(arr1) / sizeof(arr1[0]));
	cout << "**************************************" << endl;

	cout << "Arrey 2 is: ";
	print_array(arr2, sizeof(arr2) / sizeof(arr2[0]));
	cout << "*****   Differential multiplication happening   ******" << endl;

	int* result = apply_all(arr1, sizeof(arr1) / sizeof(arr1[0]), arr2, sizeof(arr2) / sizeof(arr2[0]));
	size_t results_size = sizeof(arr1) / sizeof(arr1[0]) * sizeof(arr2) / sizeof(arr2[0]);

	cout << "Result's size is: " << results_size << endl;

	cout << "The result is: ";

	print_array(result, results_size);

	delete [] result;
	



	return 0;
}