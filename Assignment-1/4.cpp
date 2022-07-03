#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	cout << "Enter the num1: ";
	double num1;
	cin >> num1;

    cout << "Enter the num2: ";
	double num2;
	cin >> num2;

    cout << "Enter the operation (+ - * / %): ";
	char op;
	cin >> op;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << (num1 + num2);
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << (num1 - num2);
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << (num1 * num2);
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << (num1 / num2);
        break;
    case '%':
        {
            int num1Int = (int)num1;
            int num2Int = (int)num2;
            bool both_integer = (num1 == num1Int) && (num2 == num2Int);
            if (both_integer){
                cout << num1Int << " % " << num2Int << " = " << (num1Int % num2Int);
            }
            else{
                cout << "both the numbers must be integers.";
            }
        }
        break;
    default:
        cout << "Invalid operator!";
        break;
    }
}