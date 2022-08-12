#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << "Word Splitter & Uppercase\n"
         << setfill('=') << setw(26) << "\n";

    //read text
    cout << "Enter the text (seperate the words using ':' colon): \n";
    string text;
    cin >> text;

    for (int i = 0; i < text.length(); i++)
    {
        // check if char is between small case range
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] -= 32; // deduct 32 to get the uppercase char
        }

        if (text[i] == ':') // check if char is colon
        {
            text[i] = '\n'; // replace with newline character (to split)
        }
    }

    // print results
    cout << "\n"
         << "Results\n"
         << setfill('=') << setw(8) << "\n";
    cout << text;
}