#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <string> vec{ "James","Jameson","Jaxy" };

	for (auto &c : vec) {
		c = "Funny";
	}
	for (auto c : vec)
		cout << c << " ";

	return 0;
}