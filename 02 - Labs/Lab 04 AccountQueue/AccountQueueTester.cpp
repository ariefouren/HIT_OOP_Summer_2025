// File:  AccountQueueTester.cpp
// test the AccountQueue class

#include "AccountQueue.h"
#include "BankAccount.h"
#include <iostream>
using namespace std;

int main()
{
    // create an empty queue
    AccountQueue queue;

    // create 3 accounts
    BankAccount* aliceAccount = new BankAccount("Alice Doe", 100.00);
    BankAccount* bobAccount = new BankAccount("Bob Smith", 200.00);
    BankAccount* davidAccount = new BankAccount("David Brown", 300.00);

    // add the accounts to the queue
    queue.enqueue(aliceAccount);
    queue.enqueue(bobAccount);
    queue.enqueue(davidAccount);

    // display the queue
    cout << "The queue contains: " << endl;
    cout << queue << endl;

    // display the account at the front of the queue
    cout << "The account at the front of the queue is: " << endl;
    cout << *queue.peekTop() << endl;

    // display the queue
    cout << "The queue contains: " << endl;
    cout << queue << endl;

    // remove an account from the queue
    BankAccount* removedAccount = queue.dequeue();
    cout << "Removed account: \n" << *removedAccount << endl;

    // remove an account from the queue
    removedAccount = queue.dequeue();
    cout << "Removed account: \n" << *removedAccount << endl;

    // remove an account from the queue
    removedAccount = queue.dequeue();
    cout << "Removed account: \n" << *removedAccount << endl;


    // display the queue
    cout << "The queue contains: " << endl;
    cout << queue << endl;

    // add the accounts again to the queue
    queue.enqueue(aliceAccount);
    
    // display the queue
    cout << "Alice's account is added again" << endl;
    cout << "The queue contains: " << endl;
    cout << queue << endl;

    // clean up
    delete aliceAccount;
    delete bobAccount;
    delete davidAccount;

    return 0;
}