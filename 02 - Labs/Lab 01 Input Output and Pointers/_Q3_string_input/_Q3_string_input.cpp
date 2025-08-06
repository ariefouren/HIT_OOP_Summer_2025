#include <iostream>
using namespace std;
/*
Expected output:

Enter your name :Koby
Enter your age :27
Hello, Koby !
you are 27 years old.
Bye !
*/
const int MAX_LEN = 500;

int main()
{
	char name[MAX_LEN];
	int age;

	cout << "Enter your name :";
	cin >> name;
	cout << "Enter your age   :";
	cin >> age;

	cout << "Hello, " << name << endl;
	cout << "You are " << age << " old" << endl;
	cout << "By ! :)";

}