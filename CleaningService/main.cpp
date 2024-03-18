#include <iostream>

using namespace std;

int main() {

	const double price_per_room = { 32.5 };
	const double tax_ratio = { 0.06 };
	const int estimate_day = {30};

	cout << "Hello Kayra's room cleaning service" << endl << endl;

	cout << "How many room would you like to cleaned: ";

	int number_of_room;
	cin >> number_of_room;

	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of rooms: " << number_of_room << endl;
	cout << "Price per room: " << price_per_room << " $" << endl;
	cout << "Cost: " << price_per_room * number_of_room << " $" << endl;
	cout << "Tax: " << number_of_room * price_per_room * tax_ratio << " $" << endl << endl;
	cout << "********************************" << endl << endl;
	cout << "Total Estimate: " << (number_of_room * price_per_room) + (number_of_room * price_per_room * tax_ratio) << " $" << endl;
	cout << "This estimate is valid for " << estimate_day << " days." << endl;

	







	return 0;
}