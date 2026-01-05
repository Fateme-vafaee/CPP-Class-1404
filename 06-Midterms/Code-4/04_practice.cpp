// برنامه ای بنویسید که بزرگترین و کوچکترین عدد آرایه را چاپ کند.

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Please enter the amount of numbers you want to enter  ";
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Please enter the " << i + 1 << "th one  ";
        cin >> array[i];
    }

    // Bubble Sort
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "the minimum is:" << array[0] << endl;
    cout << "the maximum is:" << array[size - 1] << endl;

    // for wait Program to exit
    int wait;
    cin >> wait;
    return 0;
}