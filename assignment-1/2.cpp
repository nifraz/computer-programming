#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	// read digit
	cout << "Enter a digit (1-9) : ";
	int digit;
	cin >> digit;

	if (digit < 1 || digit > 9) // check if valid single digit
	{
		cout << "Input must be a valid single digit (1-9)!\n"
			 << "The program will exit now...";
		return 0; // return main
	}

	cout << "\n";
	int term;
	int sum = 0;

	// generate 5 terms
	for (int i = 1; i <= 5; i++)
	{
		// build term
		term = 0;
		for (int j = 0; j < i; j++)
		{
			term += digit * pow(10, j);
		}
		// print term
		cout << "+" << setw(8) << term << "\n";
		sum += term; // add term to sum
	}

	// print result
	cout << setfill('-') << setw(10) << "\n"
		 << setfill(' ') << "=" << setw(8) << sum << "\n"
		 << setfill('-') << setw(10) << "\n";
}