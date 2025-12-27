#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter count of Number : " << endl;
    int countNUmber = 0;
    cin >> countNUmber;
    int sum = 0;
    int number = 0;
    for (int i = 1; i <= countNUmber; i++)
    {
        cout << "Please enter the " << i << "th number : ";
        cin >> number;
        sum += number;
    }
    cout << sum / countNUmber  ;

    //for wait Program to exit
    int wait ;
    cin >> wait;
    return 0; 
}