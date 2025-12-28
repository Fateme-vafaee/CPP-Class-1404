#include <iostream>
using namespace std;

// Function declarations
void Nothing();
int returnInt();
string returnString();
int* returnPointerToInt();

int main()
{
    // call void function
    Nothing();
    // call int function and store return value
    int intValue = returnInt();
    cout << "Returned Integer Value: " << intValue << endl;
    // call string function and store return value
    string strValue = returnString();
    cout << "Returned String Value: " << strValue << endl;
    // call int pointer function and store return value
    int* intPtr = returnPointerToInt();
    cout << "Returned Pointer Address: " << intPtr << endl;

        //for wait Program to exit
    cout << "Press enter to exit..." << endl;
    int wait ;
    cin >> wait;
    
    return 0;
}

// The void function does not return a value.
void Nothing()
{
    cout << "This function does nothing !" << endl;
}

// The int function that returns an integer value
int returnInt()
{
    cout << "This function returns an integer !" << endl;
    return 0;
}

// The string function that returns a string value
string returnString()
{
    cout << "This function returns a string !" << endl;
    return "Hello from returnString function";
}

// The int pointer function that returns a pointer to an integer
int* returnPointerToInt()
{
    cout << "This function returns a pointer to an integer !" << endl;
    int p = 10;
    int *ptr = &p;
    // '&' operator is used to get the address of variable
    return ptr;
}