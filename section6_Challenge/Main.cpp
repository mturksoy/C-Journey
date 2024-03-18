#include <iostream>

using namespace std;

int main()
{
	const double small_room_price = { 25 };
	const double large_room_price = { 35 };
	const double tax_ratio = { 0.06 };
	const int valid_day = { 30 };

	cout << "Welcome to Kayra's big cleaning service" << endl << endl;

	cout << "How many small room would you like to cleaned: ";
	int small_room_number;
	cin >> small_room_number;

	cout << "How many large room would you like to cleaned: ";
	int large_room_number;
	cin >> large_room_number;

	cout << "\n\nEstimate for carpet cleaning service" << endl;
	cout << "Number of small rooms: " << small_room_number << endl;
	cout << "Number of large rooms: " << large_room_number << endl;
	cout << "Price per small room " << small_room_price << " $" << endl;
	cout << "Price per large room " << large_room_price << " $" << endl;

	double cost = (small_room_number * small_room_price) + (large_room_number * large_room_price);
	cout << "Cost: " << cost << " $" << endl;

	double tax = ((small_room_number * small_room_price) + (large_room_number * large_room_price)) * tax_ratio;
	cout << "Tax: " << tax << " $" << endl;
	cout << "*************************" << endl;
	cout << "Total estimate: " << cost + tax << " $" << endl;
	cout << "This estimate is valid for " << valid_day << " days" << endl;



}