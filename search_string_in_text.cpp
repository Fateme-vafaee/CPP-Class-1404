#include <iostream>
#include <string>
using namespace std;
int main()
{
    string mainString;
    cout << "Please enter your string :";
    getline(cin, mainString);

    string target;
    cout << "Please enter your target :";
    getline(cin, target);

    int counter = 0;
    int pos = 0;

    // string::npos => it means that the target string is not found in the main string
    if (mainString.find(target) != string::npos)
    {
        while (mainString.find(target, pos) != string::npos)
        {
            pos = mainString.find(target, pos) + 1;
            counter++;
        }
    }
    else
    {
        cout << "not found";
    }
    cout << "your target was repeated:" << counter << "times";

    // for wait Program to exit
    cout << "Press enter to exit..." << endl;
    int wait;
    cin >> wait;
}