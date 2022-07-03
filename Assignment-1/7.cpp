#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
int user_int;
int answer = 0;
    do {
        cout << "Enter an integer: ";
        cin >> user_int;

        if (user_int > 0)
        {
            if (user_int > 10){
                answer = user_int % 10;
            }

            if (user_int % 2 == 0){
                answer = answer + 2;
            }
            else{
                answer = answer + 1;
            }

            if (user_int % 3 == 0){
                answer = answer + 3;
            }
        }

    } while(user_int);
	
	cout << "The answer is: " << answer;
}