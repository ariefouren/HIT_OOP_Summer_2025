#include <iostream>
using namespace std;

const int MAX_LENGTH = 100;

int main()
{
	int age;
	char name[MAX_LENGTH];

	// users' input
	cout << "Enter your name :";
	cin >> name;

	cout << "Enter your age :";
	cin >> age;

	// print the results
	cout << "Hello, " << name << " !" << endl;
	cout << "You are " << age << " old ...";



}