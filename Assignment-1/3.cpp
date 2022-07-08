#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << "Leap Year Checker\n"
         << setfill('=') << setw(18) << "\n";

    // read year
    cout << "Enter the year : ";
    int year;
    cin >> year;

    if (year <= 0) // check if year is negative or 0
    {
        cout << "Year must be positive!\n"
             << "The program will exit now...";
        return 0; // return main
    }

    bool isLeapYear = year % 4 == 0; // year must be divided by 4
    isLeapYear &= year % 100 != 0;   // and not divided by 100
    isLeapYear |= year % 400 == 0;   // or if divided by 400

    // print results
    cout << "\n"
         << year;
    if (isLeapYear) // if leap year
    {
        cout << " is a leap year.";
    }
    else
    {
        cout << " is not a leap year.";
    }
}