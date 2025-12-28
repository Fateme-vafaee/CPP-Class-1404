#include <iostream>
using namespace std;

// Function declarations
int factorial(int n);
int fibonacci(int n);
void printCountdown(int n);

int main()
{

    int num;

    cout << "Enter a number to compute its factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    cout << "Enter a number to get its Fibonacci value: ";
    cin >> num;
    
    for (int i = 0; i < num; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << "\nFibonacci of " << num << " is " << fibonacci(num) << endl;

    cout << "Enter a number to start countdown: ";
    cin >> num;
    cout << "Countdown from " << num << ": ";
    printCountdown(num);
    cout << endl;

    // for wait Program to exit
    cout << "Press enter to exit..." << endl;
    int wait;
    cin >> wait;

    return 0;
}

int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int fibonacci(int n)
{
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void printCountdown(int n)
{
    if (n < 0)
        return;
    cout << n << " ";
    printCountdown(n - 1);
}
