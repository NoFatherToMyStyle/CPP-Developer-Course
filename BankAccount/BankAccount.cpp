#include "BankAccount.h"

BankAccount::BankAccount(std::string const owner)
{
	this->owner = owner;
	balance = 0;
}

BankAccount::BankAccount(std::string const owner, int balance)
{
	this->owner = owner;
	this->balance = balance;
}

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
	else
	{
		std::cout << "You must add a dollar amount greater than $0." << std::endl;
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount > 0)
	{
		if (balance > amount)
		{
			balance -= amount;
		}
		else
		{
			std::cout << "You don't have that much money." << std::endl;
		}
	}
	else
	{
		std::cout<< "You must add a dollar amount greater than $0." << std::endl;
	}
}

std::string BankAccount::getOwner() const
{
	return owner;
}

int BankAccount::getBalance() const
{
	return balance;
}
