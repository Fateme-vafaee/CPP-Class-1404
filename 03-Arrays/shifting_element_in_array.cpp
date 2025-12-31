#include <iostream>
using namespace std;
int main() {
    int n=5;
    int num[n]={1,2,3,4,5};
    int target;
    cout << "Enter Your Target:";
    cin >> target;
    for (int i=0;i<n;i++)
    {
        if (num[i]==target)
        {
            for(int j=i;j<n-1;j++)
            {
                num[j]=num[j+1];
            }
            n--;
            break;
        }
    }
    cout << "Array After Replace : ";
    for (int i=0;i<n;i++)
    {
        cout << num[i] << "  ";
    }
      // for wait Program to exit
    int wait;
    cin >> wait;
    return 0;
}
