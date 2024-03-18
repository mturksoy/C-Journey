#include <iostream>
#include <string>

using namespace std;

int main() {

	string s{};

	cout << "Enter the word: ";
	cin >> s;

	for (int i{ 0 }; i < s.length(); i++) {
		for (int b{ i+1 }; b < s.length(); b++) 
			cout << " ";
		
		for (int b{ 0 }; b < (i + 1); b++) 
			cout << s[b];
		
		for (int b{ i-1 }; b >= 0; b--)
			cout << s[b];
		
		cout << endl;	
	}
	return 0;
}