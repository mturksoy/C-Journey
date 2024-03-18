#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {

	char first_name[20]{};
	char last_name[20]{};
	char full_name[50]{};
	char temp[50]{};

	/*cout << first_name << endl;

	cout << "Please enter your first name: ";
	cin >> first_name;

	cout << "Enter your last name: ";
	cin >> last_name;

	cout << "Hello " << first_name << " , your name has " << strlen(first_name) << " characters." << endl;
	cout << "and your last name has " << strlen(last_name) << " characters." << endl;*/

	//strcpy(full_name, first_name); //coping first name into full_name
	//strcat(full_name, " "); // adding a space into full_name //concatenate
	//strcat(full_name, last_name); // adding last_name into full_name

	/*cout << "Enter your full name: ";
	cin >> full_name;

	cout << "Your full name is: " << full_name << endl;*/

	cout << "Enter your full name: ";
	cin.getline(full_name,50);

	cout << "Your full name is: " << full_name << endl;

	strcpy(temp, full_name);

	if (strcmp(temp, full_name) == 0); //they are same if this is 1 they are differant

	return 0;
}