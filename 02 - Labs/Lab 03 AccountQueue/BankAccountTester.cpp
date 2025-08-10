// File: BankAccountTester.cpp
// test the class BankAccount
#include <iostream>
#include "BankAccount.h"
using namespace std;
int main()
{
    cout << "Total number of accounts created: "
        << BankAccount::getNumberOfAccounts() << endl;

    cout << "Creating two accounts: Alice Smith and Bob Lay\n";
    BankAccount aliceAccount("Alice Smith", 1000);
    BankAccount bobAccount("Bob  Lay", 2000);
    (cout << aliceAccount) << endl;
    cout << bobAccount << endl;

    cout << "Depositing $500 to Alice's account\n";
    aliceAccount.deposit(500);
    cout << aliceAccount << " " << endl;
     
    cout << "Withdrawing $1000 from Bob's account\n";
    bobAccount.withdraw(1000);
    cout << bobAccount << endl;

    cout << "Total number of accounts created: "
        << BankAccount::getNumberOfAccounts() << endl;
    
    return 0;
}