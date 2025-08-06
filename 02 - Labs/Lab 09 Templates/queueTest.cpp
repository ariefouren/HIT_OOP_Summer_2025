// File: queueTest.cpp
// tests the Queue class template

#include <iostream>
#include <string>
#include "QueueTemplate.h"
using namespace std;

int main() {
    cout << "--- 1. Testing Queue of integers:" << endl;
    // create a queue of integers
    Queue<int> intQueue;
    for(int i= 1; i <= 10; i++)
    {
        intQueue.enqueue(i);
    }
    // print the queue
    cout << "Queue of integers: ";
    cout << intQueue << endl;
    // delete the first 5 elements
    for(int i = 0; i < 5; i++)
    {
        intQueue.dequeue();
    }
    // print the queue
    cout << "Queue of integers after deleting the first 5 elements: ";
    cout << intQueue << endl;
    // empty the queue
    intQueue.deleteAllElements();
    // print the queue
    cout << "Queue of integers after emptying: ";
    cout << intQueue << endl;

    cout << "--- 2. Testing Queue of doubles:" << endl;
    // create a queue of doubles with values of e^i
    Queue<double> doubleQueue;
    for(int i = 1; i <= 10; i++)
    {
        doubleQueue.enqueue(exp(i)); // add e^i to the queue
    }
    // print the queue
    cout << "Queue of doubles: ";
    cout << doubleQueue << endl;
    // delete the first 5 elements
    for(int i = 0; i < 5; i++)
    {
        doubleQueue.dequeue();
    }
    // print the queue
    cout << "Queue of doubles after deleting the first 5 elements: ";
    cout << doubleQueue << endl;
    // empty the queue
    doubleQueue.deleteAllElements();
    // print the queue
    cout << "Queue of doubles after emptying: ";
    cout << doubleQueue << endl;

    cout << "--- 3. Testing Queue of chars:" << endl;
    // create a queue of chars
    Queue<char> charQueue;
    for(char c = 'a'; c <= 'z'; c++)
    {
        charQueue.enqueue(c);
    }
    // print the queue
    cout << "Queue of chars: ";
    cout << charQueue << endl;
    // delete the first 20 elements
    for(int i = 0; i < 20; i++)
    {
        charQueue.dequeue();
    }
    // print the queue
    cout << "Queue of chars after deleting the first 20 elements: ";
    cout << charQueue << endl;
    // empty the queue
    charQueue.deleteAllElements();
    // print the queue
    cout << "Queue of chars after emptying: ";
    cout << charQueue << endl;

    cout << "--- 4. Testing Queue of booleans :" << endl;
    cout  <<"--- 5. Testing Queue of bytes :" << endl;
    return 0;
}