#include <iostream>
#include <string>
using namespace std;
int main()
{
    string mainString;
    cout << "Please enter your string:";
    getline(cin, mainString);

    bool isPal = true;
    for (int i = 0; i < (mainString.length() - 1) / 2; i++)
    {
        if (mainString[i] == mainString[(mainString.length() - 1) - i])
        {
            isPal = true;
            continue;
        }
        else
        {
            isPal = false;
            break;
        }
    }
    if (isPal)
    {
        cout << "This string is palindrome";
    }
    else
    {
        cout << "This string is not palindrome";
    }

    // for wait Program to exit
    cout << "Press enter to exit..." << endl;
    int wait;
    cin >> wait;
}