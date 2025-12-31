//برنامه ای بنویسید که از جمله اول تا nام سری فیبوناچی را چاپ کند.

#include <iostream>
using namespace std;
int main()
{
    int firstNumber = 0;
    int nextNumber = 1;

    int limit;
    cout << "Please enter the number limit: ";
    cin >> limit;

    cout << "The fibonacci series up to " <<limit<<"th one is:";
    cout << firstNumber << nextNumber;
    for (int i = 2; i <= limit; i++)
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