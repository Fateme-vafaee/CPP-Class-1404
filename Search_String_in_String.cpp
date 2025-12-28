#include <iostream>
#include <string>
using namespace std;
int main()
{
    string MainSting;
    cout << "please enter your string :";
    getline(cin, MainSting);

    string target;
    cout << "please enter your target :";
    getline(cin, target);

    int counter = 0;
    int pos = 0;
    if (MainSting.find(target) != string::npos)
    {
        while (MainSting.find(target, pos) != string::npos)
        {
            pos = MainSting.find(target, pos) + 1;
            counter++;
        }
    }
    else
    {
        cout << "not found";
    }
    cout << "your target was repeated:" << counter << "times";
}