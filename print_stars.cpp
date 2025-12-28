#include <iostream>
using namespace std;

int main()
{ int countColumns = 0;
    cout << "Please enter count of Columns : " << endl;
    cin >> countColumns;


    //Print stars 
    for (int i = 1; i <= countColumns; i++)
    {
       cout << "[Row : " << i << "] =>\t";
       for (int j = 0; j < i; j++)
       {
        cout << "* ";
       }
       cout << endl;
    }

    //Reverse print stars
    for (int i = countColumns; i >= 1; i--)
    {
       cout << "[Row : " << i << "] =>\t";
       for (int j = 0; j < i; j++)
       {
        cout << "* ";
       }
       cout << endl;
    }


    


    
    //for wait Program to exit
    int wait ;
    cin >> wait;
    return 0; 
}