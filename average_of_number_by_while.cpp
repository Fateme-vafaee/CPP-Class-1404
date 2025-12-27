#include <iostream>

using namespace std;

int main()
{

    int sum = 0;
    int counter = 1;
    int number = 0;
    cout << "Please enter the " << counter << "th number : ";
    cin >> number;
    while (number != -1)
    {
        cout << "Please enter the " << counter << "th number : ";
        cin >> number;
        sum += number;
        counter++;
    }

    if (sum == 0)
        cout << "No numbers were entered.";
    else
        cout << sum / counter;

    // for wait Program to exit
    int wait;
    cin >> wait;
    return 0;
}