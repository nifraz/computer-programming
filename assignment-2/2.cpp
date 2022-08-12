#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << "Word Counter\n"
		 << setfill('=') << setw(13) << "\n";

    const int MAX_CHARS = 1024;

    //read the text
    cout << "Enter the text (" << MAX_CHARS << " characters max): ";
    char s[MAX_CHARS];
    cin.getline(s, MAX_CHARS);

    int wordCount = 0; //set wordCout to 0
    
    // variable to hold the flag if last char was space
    // initially set to true, to start counting the first word
    bool isInSpace = true; 

    for (int i = 0; i < MAX_CHARS; i++)
    {
        if (s[i] == '\0') //check if NUL character
        {
            break; //break the loop
        }

        if (s[i] == ' ') //check if space
        {
            isInSpace = true; //set space flag
        }
        //if not space AND the last character was space
        else if (isInSpace)
        {
            wordCount++; //increment wordCount
            isInSpace = false; //remove space flag
        }
    }

    // print results
	cout << "\n"
		 << "Results\n"
		 << setfill('=') << setw(8) << "\n";
    cout << "Your text contains " << wordCount << " words.";
}