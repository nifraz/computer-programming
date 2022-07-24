#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << "(Enter 0 to show the final answer)\n";
    int integerInput;
    int finalAnswer = 0;
    int count = 1;

    do
    {
        // read integer
        cout << "Enter Integer #" << count++ << " : ";
        cin >> integerInput;

        if (integerInput > 0) //check if positive
        {
            if (integerInput > 10) //check if greater than 10
            {
                //add modulus remainder of 10
                finalAnswer += integerInput % 10;
            }

            if (integerInput % 2 == 0) //if even
            {
                finalAnswer += 2; //add 2
            }
            else //if odd
            {
                finalAnswer += 1; //add 1
            }

            if (integerInput % 3 == 0) //if divisible by 3
            {
                finalAnswer += 3; // add 3
            }
        }
    } while (integerInput); // loop until user enters 0

    cout << "\n"
         << "Final Answer : " << finalAnswer;
}