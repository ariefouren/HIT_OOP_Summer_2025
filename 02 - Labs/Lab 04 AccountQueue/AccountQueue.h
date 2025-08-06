// File: AccountQueue.h
// define the class AccountQueue

#pragma once
#include "BankAccount.h"
#include <iostream>
using namespace std;

class AccountQueueNode
{
public:
    AccountQueueNode(BankAccount* account); // constructor
    BankAccount* getAccount() const;
    AccountQueueNode* getNext() const;
    void setNext(AccountQueueNode* next);

private:
    BankAccount* account;
    AccountQueueNode* next;
};

class AccountQueue
{
public:
    AccountQueue(); // constructor. creates an empty queue
    ~AccountQueue(); // destructor
    void enqueue(BankAccount* account); // add an account to the queue
    BankAccount* dequeue(); // remove and return the account at the front of the queue
    BankAccount* peekTop() const; // return the account at the front of the queue
    bool isEmpty() const; // return true if the queue is empty

    // friend function
    friend ostream& operator<<(ostream& os, const AccountQueue& queue); // output operator

private:
    AccountQueueNode* front;
    AccountQueueNode* back;
};

