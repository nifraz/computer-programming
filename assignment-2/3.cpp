#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    char my_array[5][10] = {"Yamaha", "Honda", "Benz", "Tata", "Suzuki"};

    cout << my_array << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << my_array[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (my_array[i][j] == '\0')
                continue;
            cout << my_array[i][j] << endl;
        }
    }
}