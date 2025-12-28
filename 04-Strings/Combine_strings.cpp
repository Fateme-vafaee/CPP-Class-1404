#include <iostream>
#include <string>
using namespace std;
int main()
{
    string FirstStrings, SecondStrings, Combination;

    cout << "please enter the first string" << endl;
    getline(cin, FirstStrings);

    cout << "please enter the second string" << endl;
    getline(cin, SecondStrings);
    
    Combination = FirstStrings + SecondStrings;
    cout << "the combination is:" << Combination;
}