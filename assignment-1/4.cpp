#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << "Simple Calculator\n"
         << setfill('=') << setw(18) << "\n";

    // read number 1
    cout << "Enter Number 1 : ";
    double number1;
    cin >> number1;

    // read number 2
    cout << "Enter Number 2 : ";
    double number2;
    cin >> number2;

    // read operator symbol
    cout << "Enter the symbol for operation ( + | - | * | / | % ) : ";
    char operatorSymbol;
    cin >> operatorSymbol;

    // print answer
    cout << "\n"
         << "Answer\n"
         << setfill('=') << setw(7) << "\n";

    switch (operatorSymbol)
    {
    case '+': // addition
        cout << number1 << " + " << number2 << " = " << (number1 + number2);
        break;
    case '-': // subtraction
        cout << number1 << " - " << number2 << " = " << (number1 - number2);
        break;
    case '*': // multiplication
        cout << number1 << " * " << number2 << " = " << (number1 * number2);
        break;
    case '/': // division
    {
        if (number2 != 0) // check if divisor is not 0
        {
            cout << number1 << " / " << number2 << " = " << (number1 / number2);
        }
        else
        {
            cout << "Divisor (Number 2) cannot be zer0!";
        }
    }
    break;
    case '%': // modulus
    {
        int number1IntValue = (int)number1; // convert number 1 to int
        int number2IntValue = (int)number2; // convert number 2 to int
        // check if both the numbers are integers
        bool isInteger = (number1 == number1IntValue) && (number2 == number2IntValue);
        if (isInteger)
        {
            cout << number1IntValue << " % " << number2IntValue << " = " << (number1IntValue % number2IntValue);
        }
        else
        {
            cout << "Numbers must be integers to perform Modulus operation!";
        }
    }
    break;
    default: // other
        cout << operatorSymbol << " - Invalid operator symbol!";
        break;
    }
}