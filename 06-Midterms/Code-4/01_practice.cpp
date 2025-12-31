#include <iostream>
using namespace std;
int main()
{
    int firstNumber = 0;
    int nextNumber = 1;

    int number;
    cout << "Please enter the number";
    cin >> number;

    cout << firstNumber << nextNumber;
    for (int i = 2; i <= number; i++)
    {
        int temp = firstNumber + nextNumber;
        firstNumber = nextNumber;
        nextNumber = temp;
        cout << nextNumber;
    }
    
    // for wait Program to exit
    int wait;
    cin >> wait;
    return 0;
}