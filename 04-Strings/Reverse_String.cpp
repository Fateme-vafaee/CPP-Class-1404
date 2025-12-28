#include <iostream>
#include <string>
using namespace std;
int main()
{
    string MainSting, ReverseString = "";
    cout << "please enter your string";
    getline(cin, MainSting);
    
    for (int i = MainSting.length() - 1; i >= 0; i--)
    {
        ReverseString += MainSting[i];
    }
    cout << ReverseString;
}