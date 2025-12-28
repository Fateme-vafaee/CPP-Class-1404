#include <iostream>
#include <string>
using namespace std;
int main()
{
    string mainString, reverseString = "";
    cout << "Please enter your string";
    getline(cin, mainString);

    for (int i = mainString.length() - 1; i >= 0; i--)
    {
        reverseString += mainString[i];
    }
    cout << reverseString;

    // for wait Program to exit
    cout << "Press enter to exit..." << endl;
    int wait;
    cin >> wait;
}