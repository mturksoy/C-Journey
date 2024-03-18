//PARA TÜMLETME UYGULAMASI FOR USA

#include <iostream>

using namespace std;

int main() {

	int cents{}, dollars{}, quarter{}, dime{}, nickel{}, penny{};		//dollar 100 cent, quarter 25 cent, dime 10 cent, nickel 5 cent, penny 1 cent

	const int dollars_amount{ 100 };
	const int quarter_amount{ 25 };
	const int dime_amount{ 10 };
	const int nickel_amount{ 5 };

	cout << "Enter an amount in cents: ";
	cin >> cents;

	dollars = cents / dollars_amount;
	cents %= dollars_amount;

	quarter = cents / quarter_amount;
	cents %= quarter_amount;

	dime = cents / dime_amount;
	cents %= dime_amount;

	nickel = cents / nickel_amount;
	cents %= nickel_amount;

	penny = cents;

	cout << "You can provide this change as follows:" << endl;
	cout << "dollars: " << dollars << endl;
	cout << "quarter: " << quarter << endl;
	cout << "dime: " << dime << endl;
	cout << "nickel: " << nickel << endl ;
	cout << "penny: " << penny << endl;

	return 0;
}