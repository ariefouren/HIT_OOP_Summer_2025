//
// SaveTheDates.cpp
//
#include <iostream>
#include <iomanip>
using namespace std;

#define MONTHES_IN_YEAR 12
#define DAYS_IN_MONTH 31

// struct MyDate defines a date with day, month, year
struct MyDate
{
	int day;    // day of the month 1 - 31
	int month;  // month of the year 1 - 12
	int year;   // year 4 digits
};

// function prototypes
void swapByPtr(int* x, int* y);
void swapByRef(int& x, int& y);
int fixDate(int& day, int& month, int& year);
MyDate* saveTheDates(int numDates);
void printDate(const MyDate &date);
void printDates(MyDate* datesArr, int size);

// swapByPtr swaps the values of x and y using pointers
void swapByPtr(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

// swapByRef swaps the values of x and y using references
void swapByRef(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

// fixDate checks if the date is valid and swaps day and month if not
// returns 0 if date is valid, 1 if date is invalid
int fixDate(int& day, int& month, int& year)
{
	if (1 <= day && day <= DAYS_IN_MONTH &&
		1 <= month && month <= MONTHES_IN_YEAR) {return 0;}
	else
	{
		swapByRef(day, month);
		return 1;
	}

}

// saveTheDates saves numDates dates in an array of MyDate
// returns a pointer to the array of the dates
MyDate* saveTheDates(int numDates)
{
	MyDate* datesArr = new MyDate[numDates];
	for (int i = 0; i < numDates; i++)
	{
		cout << "Enter the date (day month year): ";
		cin >> datesArr[i].day >> datesArr[i].month >> datesArr[i].year;
		cout << "Saved date: ";
        printDate(datesArr[i]);
        cout << endl;
	}
	return datesArr;
}

// printDate prints the date in the format dd/mm/yyyy
void printDate(const MyDate &date)
{
    cout << (date.day < 10 ? "0" : "") << date.day << "/" 
        << (date.month < 10 ? "0" : "") << date.month << "/" 
        << (date.year < 1000 ? "0" : "") << date.year << endl;
}

// printDates prints the dates in the array datesArr
void printDates(MyDate* datesArr, int size)
{
	int errCount = 0;       // number of errors
	for (int i = 0; i < size; i++) // for each date in the array
	{
        // try to fix the date and count the errors
		errCount += fixDate(datesArr[i].day, datesArr[i].month, datesArr[i].year);
		printDate(datesArr[i]);
	}
	cout << "Total number of errors: " << errCount << endl;
}

// main function
// get the number of dates, save the dates in an array, print the dates
int main()
{
    // get the number of dates1
    int numDates;
    cout << "Enter the number of dates: ";
    cin >> numDates;
    // save the dates in an array
	MyDate* datesArr = saveTheDates(numDates);

    // print the dates
    cout << "The saved dates are:" << endl;
	printDates(datesArr, numDates);
}
