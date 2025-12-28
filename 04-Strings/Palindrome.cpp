#include <iostream>
#include <string>
using namespace std;
int main()
{
    string MainSting;
    cout << "please enter your string:";
    getline(cin, MainSting);

    bool isPal = true;
    for (int i = 0; i < (MainSting.length() - 1) / 2; i++)
    {
        if (MainSting[i] == MainSting[(MainSting.length() - 1) - i])
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
        cout << "this string is palindrome";
    }
    else
    {
        cout << "this string is not palindrome";
    }
}