#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	cout << "Lucky Number Calculator\n"
		 << setfill('=') << setw(24) << "\n";

	// read birthday
	cout << "Enter your birthday (YYYYMMDD) : ";
	int birthdayNumber;
	cin >> birthdayNumber;

	if (birthdayNumber <= 0) // check if number is negative or 0
	{
		cout << "Number must be positive!\n"
			 << "The program will exit now...";
		return 0; // return main
	}

	int digit;
	int luckyNumber = 0;

	while (birthdayNumber > 0)
	{								 // repeat until 0
		digit = birthdayNumber % 10; // get last digit from bd no.
		luckyNumber += digit;		 // add digit to lucky no.
		birthdayNumber /= 10;		 // remove last digit off bd no.

		// check if lucky number has more than one digit
		// after adding all digits from bd no.
		if (birthdayNumber < 1 && luckyNumber > 9)
		{
			// assign lucky no. to bd no. and reset lucky no. to 0
			// then continue loop to start adding the digits again
			birthdayNumber = luckyNumber;
			luckyNumber = 0;
		}
	}

	// print lucky no.
	cout << "\n"
		 << setfill('-') << setw(22) << "\n"
		 << "The Lucky Number is " << luckyNumber << "\n"
		 << setfill('-') << setw(22) << "\n";
}