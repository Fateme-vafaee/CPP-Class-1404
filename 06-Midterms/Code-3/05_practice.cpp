// آرایه ای با 100 عدد دریافت کنید و اعداد چارک اول را چاپ کنید
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Please enter the amount of numbers you want to enter";
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
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
    // چاپ چارک اول
    int firstQuarterSize = size / 4;
    for (int i = 0; i < firstQuarterSize; i++)
    {
        cout << array[i] << " ";
    }

    // for wait Program to exit
    int wait;
    cin >> wait;
    return 0;
}
