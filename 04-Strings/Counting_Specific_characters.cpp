#include <iostream>
#include <string>
using namespace std;
int main()
{
    string mainString;
    cout << "Please enter main string:";
    getline(cin, mainString);

    cout << "Please enter your target :";
    char target;
    cin >> target;

    int counter = 0;
    for (int i = 0; i < mainString.length(); i++)
    {
        if (mainString[i] == target)
        {
            counter++;
        }
    }
    cout << "Your target was repeated:" << counter << "times";

    // for wait Program to exit
    cout << "Press enter to exit..." << endl;
    int wait;
    cin >> wait;
}