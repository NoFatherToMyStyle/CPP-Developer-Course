#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <iostream>

class BankAccount
{
public:
	BankAccount(std::string owner);
	BankAccount(std::string owner, int balance);
	void deposit(int amount);
	void withdraw(int amount);
	std::string getOwner() const;
	int getBalance() const;

private:
	std::string owner;
	int balance;
};

#endif
