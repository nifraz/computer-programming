#include <iostream>
#include <iomanip>
#include <cmath>
// WinAPI - to support exponent symbols
#include <windows.h>

using namespace std;

int main()
{
     // set console output code page to CP-1252
     // reference - http://zuga.net/articles/text-ascii-vs-cp-1252-vs-cp-437/
     SetConsoleOutputCP(1252);

     cout << "Qubic Measurements Calculator\n"
          << setfill('=') << setw(30) << "\n";

     // read length
     cout << "Enter the length of a side : ";
     double length;
     cin >> length;

     if (length <= 0) // check if length is negative or 0
     {
          cout << "Length must be positive!\n"
               << "The program will exit now...";
          return 0; // return main
     }

     // read unit
     cout << "Enter the measurement unit ( m | cm | mm ) : ";
     string unit;
     cin >> unit;

     // calculations
     double squarePerimeter = length * 4;         // calculate perimeter
     double cubeVolume = pow(length, 3);          // calculate volume
     double cubeSurfaceArea = pow(length, 2) * 6; // calculate surface area

     // print results (x)² = (char)178, (x)³ = (char)179
     cout << "\n"
          << "Results\n"
          << setfill('=') << setw(8) << "\n";
     cout << "Perimeter of a square side = " << squarePerimeter << unit << "\n"
          << "Volume of the cube = " << cubeVolume << unit << (char)179 << "\n"
          << "Surface area of the cube = " << cubeSurfaceArea << unit << (char)178 << "\n";
}