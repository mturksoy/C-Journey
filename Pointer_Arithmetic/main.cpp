#include <iostream>
#include <string>

using namespace std;

int main() {

	int scores[]{ 100,85,75,64,0 };
	int* scores_ptr{ scores };

	while (*scores_ptr != 0) {
		cout << *scores_ptr << endl;
		scores_ptr++;
	}

	cout << "*************************" << endl;

	scores_ptr = scores;

	while (*scores_ptr != 0) 
		cout << *scores_ptr++ << endl;

	cout << "*************************" << endl;

	string s1{ "Jhon" };
	string s2{ "Jhon" };
	string s3{ "Jax" };

	string* p1{ &s1 };
	string* p2{ &s2 };
	string* p3{ &s1 };

	cout << boolalpha;

	cout << p1 << " == " << p2 << " : " << (p1 == p2) << endl;  // false
	cout << p1 << " == " << p3 << " : " << (p1 == p3) << endl;  // true

	cout << *p1 << " == " << *p2 << " : " << (*p1 == *p2) << endl;  // true
	cout << *p1 << " == " << *p3 << " : " << (*p1 == *p3) << endl;  // true
	
	p3 = &s3;
	cout << *p1 << " == " << *p3 << " : " << (*p1 == *p3) << endl;  // false


	cout << "*************************" << endl;

	char name[]{ "Jameson" };

	char* char_ptr1{ nullptr };
	char* char_ptr2{ nullptr };

	char_ptr1 = { &name[3] };  //e
	char_ptr2 = { &name[5] };  //o

	cout << "In the string " << name << ", " << *char_ptr1 << " is " << (char_ptr2 - char_ptr1) << " away from " << *char_ptr2 << endl;


	/*void swapPointers(int* ptr1, int* ptr2) {
    //-- Swap Alghorithm
   
   int temp{};
   
   *ptr1 += *ptr2;
   *ptr2 = *ptr1 - *ptr2;
   *ptr1 = *ptr1 - *ptr2;*/



	return 0;
}