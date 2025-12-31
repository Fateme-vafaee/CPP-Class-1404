// برنامه ای بنویسید که شکل زیر رو چاپ کنه
//  N=4
//  *
//  **
//  ***
//  ****

#include <iostream>
using namespace std;

int main()
{
    int columns = 4;

    for (int i = 1; i <= columns; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // for wait Program to exit
    int wait;
    cin >> wait;
    return 0;
}