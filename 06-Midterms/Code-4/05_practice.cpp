// برنامه ای بنویسید از ورودی نمره 20 دانشجو را دریافت کند و به همه دانشجویان
// چنان به طور مساوی نمره اضافه کند که بالاترین نمره 20 شود

#include <iostream>
using namespace std;

int main()
{
    int max = 0;
    int array[20];
    for (int i = 0; i < 20; i++)
    {
        cout << "Please enter the " << i + 1 << "th score  ";
        cin >> array[i];

        if (array[i] >= 0 && array[i] <= 20)
        {
            // calculate the max score
            if (array[i] > max)
            {
                max = array[i];
            }
        }
        else
        {
            cout << "wrong score please try again";
            cin >> array[i];
            if (array[i] > max)
            {
                max = array[i];
            }
        }
    }

    // how many is left to get to the 20
    int remaining = 20 - max;

    for (int i = 0; i < 20; i++)
    {
        array[i] += remaining;
    }

    cout << " new scores are:" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << array[i] << endl;
    }

    // for wait Program to exit
    int wait;
    cin >> wait;
    return 0;
}