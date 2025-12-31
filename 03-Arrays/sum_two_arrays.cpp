#include <iostream>
using namespace std;

int main() {
    int y=5;
    int x=7;
    int a[y];
    cout << "Enter Your First Array: ";
    for(int i=0;i<y;i++)
    {
        cin >> a[i];
    }
    int b[x];
    cout << "Enter Your Second Array: ";
    for(int i=0;i<x;i++)
    {
        cin >> b[i];
    }
    int c[y+x];

    int k = 0;

    for (int i = 0; i < y; i++)
        c[k++] = a[i];

    for (int i = 0; i < x; i++)
        c[k++] = b[i];

    for (int i = 0; i < y+x; i++)
        cout << c[i] << " ";

      // for wait Program to exit
    int wait;
    cin >> wait;
    return 0;
}
