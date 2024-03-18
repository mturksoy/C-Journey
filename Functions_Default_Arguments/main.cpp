#include <iostream>
#include <iomanip>

using namespace std;

double calc_cost(double base_cost = 100, double tax_rate = 0.06, double shipping = 3.50);

double calc_cost(double base_cost, double tax_rate, double shipping) {
	return base_cost += base_cost * tax_rate + shipping;
}

int main() {

	double cost{ 0 };
	cost = calc_cost();

	cout << fixed << setprecision(2);

	cout << "Cost is: " << cost << endl; //109.50

	cost = calc_cost(250);
	cout << "Cost is: " << cost << endl; //268.50

	cost = calc_cost(150,0.09,5);
	cout << "Cost is: " << cost << endl; //168.50

	return 0;
}
