#include <iostream>
#include <string>

using namespace std;

int main() {

	string s1;
	string s2{ "Frank" };
	string s3{ s2 };
	string s4{ "Frank",3 };
	string s5{ s3,0,2 };
	string s6( 3,'X');


	cout << s1 << endl; //empty
	cout << s2 << endl; // Frank
	cout << s3 << endl; // Frank
	cout << s4 << endl; // Fra
	cout << s5 << endl; // 0. indexten baþlayýp 2 kadar ilerle. Fr
	cout << s6 << endl; // XXX sadece normal parantezle kullanýlýr

	cout << "****** Assignment and Concatenation ************" << endl;

	string s7;
	s7 = "C++ Rocks!";

	string s8{ "Hello" };
	s8 = s7;

	cout << s7 << endl; // C++ Rocks
	cout << s8 << endl; // C++ Rocks

	s7 = "C++";
	s8 = "is a powerful";

	string sentence;

	sentence = s7 + " " + s8 + " language"; // C++ is a powerful language

	cout << sentence << endl;

	cout << "******* Vectors in string and loops ***********" << endl;

	cout << s2[0] << endl; //'F'
	cout << s2.at(0) << endl;

	s2[0] = 'f'; //frank
	s2.at(0) = 'p'; //prank

	for (auto c : s2)
		cout << c << endl;

	for (int c : s2)
		cout << c << endl;

	cout << "******** Comparison **********" << endl;

	string s9{ "Apple" };
	string s10{ "Banana" };
	string s11{ "Kiwi" };
	string s12{ "apple" };
	string s13{ s9 };

	cout << (s9 == s13) << endl; //true
	cout << (s9 == s10) << endl; //false
	cout << (s9 != s10) << endl; //true
	cout << (s9 < s10) << endl; //true
	cout << (s10 > s9) << endl; //true
	cout << (s12 < s13) << endl; //false
	cout << (s9 == "Apple") << endl; // true

	cout << "******* Substring ***********" << endl;

	string s14{ "This is a test" };

	cout << s14.substr(0, 4) << endl;; // 0. indexten 4 ileriye kadar göster. This
	string s15{ s14,5,2 };
	cout << s15 << endl; // is
	cout << s14.substr(5, 2) << endl; // is
	cout << s14.substr(10, 4) << endl; // test

	cout << "******* Finding ***********" << endl;

	cout << s14.find("This") << endl; //0
	cout << s14.find("is") << endl; //2
	cout << s14.rfind("is") << endl; //5 starting to serach from the end
	cout << s14.find("test") << endl; //10
	cout << s14.find('e') << endl; //11
	cout << s14.find("is", 4) << endl; //5 - 4 is where dou want to start the search from
	cout << s14.find("XX") << endl; // string::npos  this is a bool if is 1 there is no keyword if is 0 there is that keyword somewhere

	cout << "******* Erasing and Cleaning ***********" << endl;

	cout << s14.erase(0, 5) << endl; //0 is starting index 5 is how many character do you wanna delete // is a test
	cout << s14.erase(5, 4) << endl; // is a
	s14.clear(); // empties s14

	cout << s14 << endl; // empty

	cout << "******** Length **********" << endl;

	string s16{ "Frank" };

	cout << s16.length() << endl; //5

	s16 += " James";
	cout << s16 << endl;


	cout << "******* Getline ***********" << endl;

	string s17;
	//cout << "Enter a string: ";
	//cin >> s17; // hello there
	//			//only accepts up to first space 
	//cout << s17 << endl; // hello

	//cout << "enter string again: ";
	//getline(cin, s17); // read entire line until \n
	//cout << s17 << endl;
	
	cout << "Enter this isx: ";
	getline(cin, s17, 'x'); //this isx 
							// when you write x stops reading input
	cout << s17 << endl; // this is

	return 0;
}