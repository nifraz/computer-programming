#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	cout << "Enter the year: ";
	int year;
	cin >> year;

    bool leap_year;
    leap_year = year % 4 == 0;
    leap_year = leap_year && !(year % 100 == 0);
    leap_year = leap_year || (year % 400 == 0);

    if (leap_year){
        cout << "It is a leap year.";
    }
    else{
        cout << "It is not a leap year.";
    }
}