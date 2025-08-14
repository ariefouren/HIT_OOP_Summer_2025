#include <iostream>
#include <cmath>        // for pow() 
using namespace std;
const int NUM_BITS = 8;

// get the bits of the binary number from the user 
void getBinaryNumber(int bits[], int size);

// compute the value of the binary number presented by the array 
int binaryToDecimal(int bits[], int size);

int main()
{
	int bits[NUM_BITS];
	getBinaryNumber(bits, NUM_BITS);
	cout << "Decimal value is " << binaryToDecimal(bits, NUM_BITS);
	return 0;
}

void getBinaryNumber(int bits[], int size)
{
	cout << "Enter " << size 
		<< " bits (the most significant bit first) :" << endl;

	// the most significant digit is stored 
	// at the the last index of the array, (size - 1)
	// the weight of i-th bit is 2^i 
	for (int i = size - 1; i >= 0; i--)
	{
		cin >> bits[i];
	}

}

int binaryToDecimal(int bits[], int size)
{
	// compute the value of the binary number
	int n = 0;
	for (int i = 0; i < size; i++)
	{
		n += bits[i] * pow(2, i);
	}
	return n;
}
