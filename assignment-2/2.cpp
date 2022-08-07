#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    char s[1000];
    cout << "User String: ";
    cin.getline(s, 1000);

    int count = 0;
    bool space = true;

    for (int i = 0; i < 1000; i++)
    {
        if (s[i] == '\0')
        {
            break;
        }

        if (s[i] == ' ')
        {
            space = true;
        }
        else if (space)
        {
            count = count + 1;
            space = false;
        }
    }

    cout << "Words: " << count << endl;
}