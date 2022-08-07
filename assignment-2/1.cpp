#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int my_array[4][3] = {0};
	int tmp = 0;
	int count = 0;
	int sum = 0;

	for (int i = 0; i < 4 && tmp != -1; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "User Integer: ";
			cin >> tmp;

			if (tmp == -1)
			{
				break;
			}

			my_array[i][j] = tmp;
			count++;
			sum = sum + tmp;
		}
	}

	cout << "Count: " << count << endl;

	int max, min;
	max = min = my_array[0][0];

	cout << "Array Content: " << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << my_array[i][j] << endl;

			if (my_array[i][j] == 0)
			{
				continue;
			}

			if (my_array[i][j] > max)
			{
				max = my_array[i][j];
			}

			if (my_array[i][j] < min)
			{
				min = my_array[i][j];
			}
		}
	}

	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	cout << "Avg: " << (double)sum / count << endl;
}