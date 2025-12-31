#include <iostream>
using namespace std;

int main() {
    int num1[2][3];
    int num2[2][3];
    int sum[2][3];
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            cin >> num1[i][j];

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            cin >> num2[i][j];

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            sum[i][j] = num1[i][j] + num2[i][j];

    cout << "Sum matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
      // for wait Program to exit
    int wait;
    cin >> wait;
    return 0;
}
