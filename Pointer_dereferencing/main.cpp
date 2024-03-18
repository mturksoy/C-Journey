#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	int score{ 100 };
	int* score_ptr{ &score };

	cout << *score_ptr << endl;   // 100
	cout << score_ptr << endl;    

	*score_ptr = 200;

	cout << *score_ptr << endl;   // 200
	cout << score_ptr << endl;   //pointer's adrees isn't changing
	cout << score << endl;    // 200

	cout << "************************" << endl;

	double hi_temp{ 100.5 }, low_temp{ 35.3 };
	double* temp_ptr{ &hi_temp };

	cout << *temp_ptr << endl; //100.5

	temp_ptr = &low_temp;    // *temp_ptr = low_temp;   ----->   hi_temp = low_temp;

	cout << *temp_ptr << endl; //35.3
	
	cout << "************************" << endl;

	string s1{ "Kayra" };
	string* str_ptr{ &s1 };

	cout << *str_ptr << endl;
	s1 = "Damla";

	cout << *str_ptr << endl;

	cout << "************************" << endl;

	vector <string> stooges{ "Damla" , "Kayra" , "Doom" };
	vector <string>* vector_ptr{ &stooges };

	cout << "First stooge is: " << (*vector_ptr).at(0) << endl;

	for (auto c : *vector_ptr)
		cout << c << " ";
	
	return 0;
}