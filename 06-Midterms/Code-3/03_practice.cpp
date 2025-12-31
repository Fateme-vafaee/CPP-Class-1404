// یک آرایه 10 تایی از ورودی دریافت کنید و اعداد غیرتکراری آن را چاپ کنید

#include <iostream>
using namespace std;
int main()
{
    int array[10];
    int counter = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Please enter the " << counter + 1 << "th number : ";
        cin >> array[i];
        counter++;
    }

    for (int i = 0; i < 10; i++)
    {
        int count = 0;

        for (int j = 0; j < 10; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            cout << array[i] << " ";
        }
    }
    // for wait Program to exit
    int wait;
    cin >> wait;
    return 0;
}