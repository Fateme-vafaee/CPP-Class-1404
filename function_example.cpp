#include <iostream>
using namespace std;

// Create a func
void printMessage()
{
    cout << "Hello, this is a sample function!" << endl;
}
// Function declarations
bool isPrime(int number);
void printStars(int countColumns);

int main()
{
    // Call the function
    printMessage();
    printStars(5);

    for (int i = 0; i < 15; i++)
    {
        // call function in loop
        if (isPrime(i))
        {
            cout << i << " is a prime number." << endl;
        }
    }

    // for wait Program to exit
    cout << "Press enter to exit..." << endl;
    int wait;
    cin >> wait;

    return 0;
}

// Create your functions here or above the main function

bool isPrime(int number)
{
    if (number <= 1)
        return false;
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

void printStars(int countColumns)
{
    // print stars
    for (int i = 1; i <= countColumns; i++)
    {
        cout << "[Row : " << i << "] =>\t";
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // Reverse Print stars
    for (int i = countColumns; i >= 1; i--)
    {
        cout << "[Row : " << i << "] =>\t";
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}