// File: QueueTemplate.h
// Queue class template
// Note that the implementation of the Queue class template is in the header file

#pragma once
#include <iostream>
using namespace std;

template <typename T> // T is a type parameter
class Queue {
private:
    // inner class Node to represent a node in the queue
    class Node {
       private:
        T data;     // Data stored in the node
        Node* next; // Pointer to the next node
        
        // constructor
        Node(const T& data, Node* next = nullptr) : data(data), next(next) {}
        
        // Declare Queue as a friend class to allow Queue to access Node's private members
        friend class Queue<T>;
        // Declare the overloaded << operator as a friend to allow it to access Node's private members
        friend ostream& operator<<(std::ostream& os, const Queue<T>& queue);
    };
     
    Node* head; // Pointer to the first node
    Node* tail; // Pointer to the last node

public:
    // Constructor
    Queue() : head(nullptr), tail(nullptr) {}

    // Destructor (deletes all nodes in the queue) 
    ~Queue() {  
        deleteAllElements();
    }

    // enqueue an element to the queue           
    void enqueue(const T& data) {
        Node* newNode = new Node(data);
        if (isEmpty()) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // dequeue an element from the queue and return its value
    T dequeue() {
        if(isEmpty()) {
            throw out_of_range("Queue is empty"); // throw an exception
        }
        T data = head->data;
        Node* temp = head;  
        head = head->next;
        delete temp;
   }

    // Return the element at the front of the queue without removing it
    T peek() const {
        if(isEmpty()) {
            throw out_of_range("Queue is empty"); // throw an exception
        }
        return head->data;
    }

    //check if the queue is empty
    bool isEmpty() const {
        return head == nullptr;
    }

    // Remove all elements from the queue
    void deleteAllElements() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    // Overload the << operator to display the elements of the queue
    friend ostream& operator<<(std::ostream& os, const Queue<T>& queue) {
        Node* current = queue.head;
        while (current != nullptr) {
            os << current->data << " ";
            current = current->next;
        }
        cout << endl;
        return os;
    }

};


