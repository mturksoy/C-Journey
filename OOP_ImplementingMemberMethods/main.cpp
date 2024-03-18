#include <iostream>
#include "Account.h"


using namespace std;

int main() {

	Account Kayra;
	Kayra.set_name("Kayra");
	Kayra.set_balance(1000.0);

	if (Kayra.deposit(200.0)) 
		cout << "Deposit OK" << endl;
	
	else
		cout << "Deposit not allowed " << endl;

	if (Kayra.withdraw(500.0))
		cout << "Withdrawal OK" << endl;
	else
		cout << "Not sufficient funds" << endl;

	if (Kayra.withdraw(1500.0))
		cout << "Withdraw OK" << endl;
	else
		cout << "Not sufficient funds" << endl;
	
	return 0;
}