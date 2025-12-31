//برنامه ای بنویسید که اعداد اول کوچکتر از  N را چاپ کند

#include <iostream>
using namespace std;

int main()
{
    int limit = 0;
    cout << "Please enter the upper limit to print prime numbers: " << endl;
    cin >> limit;

    cout << "Prime numbers up to " << limit << " are: " << endl;

    for (int num = 2; num <= limit; num++)
    {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << num << " ";
        }
    }
    cout << endl;

    // for wait Program to exit
    int wait;
    cin >> wait;
    return 0;
}