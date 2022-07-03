#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	cout << "Enter the birthday (yyyymmdd): ";
	int birthday;
	cin >> birthday;

	int digit;

	int sum = 0;
	while(birthday > 0){
		digit = birthday % 10;
		sum = sum + digit;
		birthday = birthday / 10;
	}
	
	int lucky_number = 0;
	while (sum > 0)
	{
		digit = sum % 10;
		lucky_number = lucky_number + digit;
		sum = sum / 10;
	}

	cout << "The lucky number is: " << lucky_number;
}