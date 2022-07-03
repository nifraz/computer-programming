#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	int students = 45;
	int boys = 25;
	int girls = students - boys;
	
	int passed_students = students * 80 / 100;
	int failed_girls = 2;
	int passed_girls = girls - failed_girls;
	int passed_boys = passed_students - passed_girls;
	
	cout << "Boys passed the exam: " << passed_boys;
}