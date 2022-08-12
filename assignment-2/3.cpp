#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // assign the array
    char chArray[5][10] = {
        "Yamaha",
        "Honda",
        "Benz",
        "Tata",
        "Suzuki"};

    // print base memory address
    cout << "chArray = " << chArray << "\n";

    // print each row values (words)
    for (int i = 0; i < 5; i++)
    {
        cout << "chArray[" << i << "] = " << chArray[i] << "\n";
    }

    // print each element
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (chArray[i][j] == '\0') // skip if NUL char
            {
                continue;
            }

            cout << "chArray[" << i << "][" << j << "] = " << chArray[i][j] << "\n";
        }
    }
}