#include <iostream>
#include "Account.h"

int main()
{
	BankAccount b1("Bill");
	BankAccount b2("Ted", 2000);

	std::cout << b1.getOwner() << "'s account contains " << b1.getBalance()
		<< std::endl;
	std::cout << b2.getOwner() << "'s account contains " << b2.getBalance()
		<< std::endl;

	b1.withdraw(1000);
	b2.withdraw(100);

	std::cout << b1.getOwner() << "'s account contains " << b1.getBalance()
		<< std::endl;
	std::cout << b2.getOwner() << "'s account contains " << b2.getBalance()
		<< std::endl;

	return 0;
}
