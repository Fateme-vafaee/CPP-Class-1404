#include <iostream>
#include <string>
using namespace std;
int main()
{
    string MainSting;
    cout << "please enter :";
    getline(cin, MainSting);

    char target;
    cout << "please enter your target :";
    cin >> target;
    
    int counter = 0;
    for (int i = 0; i < MainSting.length(); i++)
    {
        if (MainSting[i] == target)
        {
            counter++;
        }
    }
    cout << "your target was repeated:" << counter << "times";
}