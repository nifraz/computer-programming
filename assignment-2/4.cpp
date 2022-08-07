#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    string str;
    cout << "Text with colon separated: ";
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
	}

    for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ':')
        {
            cout << endl;
        }
        else
        {
            cout << str[i];
        }
	}
}