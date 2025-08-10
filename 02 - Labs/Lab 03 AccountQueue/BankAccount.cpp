#include "BankAccount.h"
#include <cstring>
#include <iomanip>

// static member initialization
int BankAccount::numberOfAccounts = 0;

// constructor
BankAccount::BankAccount(const char* customerName, double balance)
	: balance(balance), accountNumber(++numberOfAccounts)
{
	strcpy_s(this->customerName, customerName);
	this->customerName[MAX_NAME_LENGTH - 1] = '\0'; // ensure null termination
}

const char* BankAccount::getCustomerName() const
{
	return this->customerName;
}

double BankAccount::getBalance() const
{
	return this->balance;
}

int BankAccount::getAccountNumber() const
{
	return this->accountNumber;
}

void BankAccount::deposit(double amount)
{
	this->balance += amount;
}

void BankAccount::withdraw(double amount)
{	
	this->balance -= amount;
}

int BankAccount::getNumberOfAccounts()
{
	return numberOfAccounts;
}

ostream& operator<<(ostream& os, const BankAccount& account)
{
	// TODO: insert return statement here
	os << "Account Number: " << account.accountNumber
	   << ", Customer Name: " << account.customerName
		<< ", Balance: $" << fixed << setprecision(2) << account.balance;
	// 1000.00 format
	return os;
}
