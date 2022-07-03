#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	cout << "Enter a single digit integer: ";
	int n;
	cin >> n;
	
	int sum = 0;
	for(int i=1; i<=5; i++){
		int term = 0;
		for(int j=0; j<i; j++){
			term += n * pow(10, j);
		}
		sum += term;
		cout << "+" << setw(8) << term << endl;
	}
	cout << "=" << setw(8) << sum;
}