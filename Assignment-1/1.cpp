#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	cout << "Enter the length: ";
	int length;
	cin >> length;
    cout << "Enter the unit: ";
	string unit;
	cin >> unit;

    int perimeter = length * 4;
    int volume = pow(length, 3);
    int surface_area = pow(length, 2) * 6;

    cout << "Perimeter of a side: " << perimeter << unit << endl;
    cout << "Volume of a cube: " << volume << unit << "(cubic)" << endl;
    cout << "Surface area of a cube: " << surface_area << unit << "(square)";
}