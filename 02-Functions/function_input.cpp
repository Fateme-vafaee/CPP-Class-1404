#include <iostream>
using namespace std;

// Function declarations
void getInt(int value);
void getString(string text);
void getPointerToInt(int *pValue);
void getArrayOfInt(int arr[], int size);
void get2DArrayOfInt(int arr[][3], int rows, int cols);

int main()
{
    int intValue = 42;
    string strValue = "Hello, Sadjad university!";
    int value = 100;
    int arr[] = {1, 2, 3, 4, 5};
    int arr2D[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // call functions with different parameter types
    getInt(intValue);
    getString(strValue);
    getPointerToInt(&value);
    getArrayOfInt(arr, 5);
    get2DArrayOfInt(arr2D, 2, 3);

    // for wait Program to exit
    cout << "Press enter to exit..." << endl;
    int wait;
    cin >> wait;

    return 0;
}

// passing an integer to a function
void getInt(int value)
{
    cout << "Value is : " << value << endl;
}

// passing a string to a function
void getString(string text)
{
    cout << "Text is : " << text << endl;
}

// passing a pointer to a function
void getPointerToInt(int *pValue)
{
    cout << "Pointer Address is : " << pValue << endl;
}

// passing an array to a function, it decays to a pointer to its first element.
void getArrayOfInt(int arr[], int size)
{
    cout << "Array Elements are : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// passing a 2D array to a function, the number of columns must be specified.
void get2DArrayOfInt(int arr[][3], int rows, int cols)
{
    cout << "2D Array Elements are : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}