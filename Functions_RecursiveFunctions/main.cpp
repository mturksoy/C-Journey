#include <iostream>
#include <iomanip>

using namespace std;

unsigned long long factorial(unsigned long long);
unsigned long long fibonacci(unsigned long long);
double a_penny_doubled_everyday(int day, double penny = 0.01);
int sum_of_digits(int n);

unsigned long long factorial(unsigned long long a) {

	if (a == 0)
		return 1;     // base case
	return a * factorial(a - 1);   // recursive case 
}

unsigned long long fibonacci(unsigned long long b) {

	if (b <= 1)
		return b;
	return fibonacci(b - 1) + fibonacci(b - 2);
}
int sum_of_digits(int n) {   // this function calling a number's digits ----> 1234 -> 1+2+3+4 = 10
	
	if (n < 10)
		return n;
	return (n % 10) + sum_of_digits(n / 10);

}
double a_penny_doubled_everyday(int day, double penny) {
	if (day == 1)
		return 0.01;

	return 2 * a_penny_doubled_everyday(day - 1, penny*2);
}
int main() {

	cout << factorial(3) << endl;
	cout << factorial(7) << endl;
	cout << factorial(20) << endl;

	cout << fibonacci(5) << endl;
	cout << fibonacci(30) << endl;
	cout << fibonacci(40) << endl;

	cout << sum_of_digits(5892) << endl;

	double total_amount = a_penny_doubled_everyday(18);

	cout << "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;
	return 0;
}