#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	cout << "Number Grid\n"
		 << setfill('=') << setw(12) << "\n";

	const int ROWS = 4;
	const int COLUMNS = 3;

	int intArray[ROWS][COLUMNS] = {0};
	int inputCount = 0;
	int sum = 0;

	cout << "Enter " << (ROWS * COLUMNS) << " numbers to fill a " << COLUMNS << "x" << ROWS << " grid.\n"
		 << "(-1 to stop)\n\n";

	int inputValue = 0; // temporary variable to store the input
	for (int i = 0; i < ROWS && inputValue != -1; i++)
	{
		cout << "[Row #" << (i + 1) << "/" << ROWS << "]\n";
		for (int j = 0; j < COLUMNS; j++)
		{
			// read number
			cout << "[Column #" << (j + 1) << "/" << COLUMNS << "] number #" << (inputCount + 1) << "/" << (ROWS * COLUMNS) << ": ";
			cin >> inputValue;

			if (inputValue == -1) // check if input is -1
			{
				cout << "You've entered -1. The program will stop taking any further inputs.\n";
				break; // break the loop. the outer loop will also will break since the outer loop condition fails.
			}

			intArray[i][j] = inputValue; // store the value
			sum += intArray[i][j];		 // add the value to sum
			inputCount++;				 // increment the count
		}
	}

	if (inputCount == 0) // check if count is 0
	{
		// print the message
		cout << "You haven't entered any values.\n"
			 << "The program will exit now.";
		return 0; // return main
	}

	// set min and max to first element
	int max = intArray[0][0];
	int min = intArray[0][0];

	// print results
	cout << "\n"
		 << "Results\n"
		 << setfill('=') << setw(8) << "\n";

	// print the grid
	cout << "Grid Content:\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			// print each element
			cout << intArray[i][j] << "\t";

			// check if value is 0
			if (intArray[i][j] == 0)
			{
				continue; // skip min, max check
			}

			// check if value is greater than max
			if (intArray[i][j] > max)
			{
				max = intArray[i][j]; // assign to max
			}

			// check if value is less than min
			if (intArray[i][j] < min)
			{
				min = intArray[i][j]; // assign to min
			}
		}
		cout << "\n";
	}

	//print output
	cout << "You have entered " << inputCount << " values.\n";
	cout << "Maximum: " << max << "\n";
	cout << "Minimum: " << min << "\n";
	cout << "Sum of entered values: " << sum << "\n";
	cout << "Average (" << sum << "/" << inputCount << "): " << (double)sum / inputCount << "\n";
}