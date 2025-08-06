// File: BankAccount.h
// define the class BankAccount

#pragma once
#include <iostream>
using namespace std;

const int MAX_NAME_LENGTH = 20;

class BankAccount
{
public:
    BankAccount(const char* customerName, double balance);
    const char* getCustomerName() const; // return the customer name
    double getBalance() const;      // return the balance
    int getAccountNumber() const;   // return the account number
    void deposit(double amount);    // deposit money
    void withdraw(double amount);   // withdraw money

    // friend functions
    friend ostream& operator<<(ostream& os, const BankAccount& account); // output operator
    
    // static member function
    static int getNumberOfAccounts(); // return the number of accounts created

private:
    double balance;     // the balance of the account
    int accountNumber;  // the account number
    char customerName[MAX_NAME_LENGTH]; // the customer name
    static int numberOfAccounts; // the number of accounts created
};