#include <iostream>
using namespace std;
                    
int main() {
    int num [3][3];
    cout <<"Enter Your Array: ";
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> num[i][j];
            
        }
    }
    cout << "Secondary Diagonal: ";
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i+j==2)
            {
                cout<<num[i][j];
                break;
            }
        }
    }
	 // for wait Program to exit
    int wait;
    cin >> wait;
    return 0;
}
