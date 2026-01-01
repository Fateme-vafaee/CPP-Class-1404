#include <iostream>
using namespace std;

const int ROW = 2;
const int COL = 3;

void inputMatrix(int a[ROW][COL]) {
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            cin >> a[i][j];
}

void addMatrix(int a[ROW][COL], int b[ROW][COL], int result[ROW][COL]) {
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            result[i][j] = a[i][j] + b[i][j];
}

void printMatrix(int a[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int num1[ROW][COL];
    int num2[ROW][COL];
    int sum[ROW][COL];

    cout << "Enter elements of first matrix:\n";
    inputMatrix(num1);

    cout << "Enter elements of second matrix:\n";
    inputMatrix(num2);

    addMatrix(num1, num2, sum);

    cout << "Sum matrix:\n";
    printMatrix(sum);
	 // for wait Program to exit 
	int wait;
	cin >> wait;
	return 0;
}

