#include <iostream>
#include <string>

using namespace std;

int main() {

	/*cout << "The paractice" << endl;
	cout << "************* Finding the word *************" << endl;

	string s1;
	s1 = "The secret word Boo";

	string word{};

	cout << "Enter the word to find: ";
	cin >> word;

	size_t position = s1.find(word);

	if (position != string::npos)
		cout << "Found " << word << " at position: " << position << endl;
	else
		cout << "Sorry " << word << " not found" << endl;*/


	cout << "THE CHALLANGE" << endl;
	cout << "******************* Challenge ********************" << endl;

	string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string key     { "mdkatcnowzyeprbhfgiuvxsqljMDKATCNOWZYEPRBHFGIUVXSQLJ" };

	string org_massage{};

	cout << "Enter your secret message: ";
	getline(cin, org_massage);

	string crypted_message{};

	cout << "Encrypting message..." << endl;

	for (auto c : org_massage) {
		size_t position = alphabet.find(c);

		if (position != string::npos) {
			char new_char = key[position];
			crypted_message += new_char;
		}
		else {		
			crypted_message += c;
		}
	}

	cout << "Crypted message is: " << crypted_message << endl;

	return 0;
}