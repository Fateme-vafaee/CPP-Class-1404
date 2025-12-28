#include <iostream>
#include <string>
using namespace std;
int main()
{
    string firstStrings, secondStrings, combination;

    cout << "please enter the first string" << endl;
    getline(cin, firstStrings);

    cout << "please enter the second string" << endl;
    getline(cin, secondStrings);

    combination = firstStrings + secondStrings;
    cout << "the combination is:" << combination;

    // for wait Program to exit
    cout << "Press enter to exit..." << endl;
    int wait;
    cin >> wait;
}