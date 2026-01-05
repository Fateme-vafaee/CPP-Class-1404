//یک آرایه 10 تایی از ورودی دریافت کنید و اعداد یکتای آن را چاپ کنید

#include <iostream>
using namespace std;

int main()
{
    int array[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Please enter number " << i + 1 << " : ";
        cin >> array[i];
    }

    cout << "Unique numbers are: ";

    for (int i = 0; i < 10; i++)
    {
        bool isUnique = true;

        for (int j = 0; j < i; j++)
        {
            if (array[i] == array[j])
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
        {
            cout << array[i] << " ";
        }
    }


	// for wait Program to exit
	int wait;
	cin >> wait;
	return 0;
}