#include <iostream>
using namespace std;

const int N = 3;

void inputMatrix(int a[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> a[i][j];
}

void printSecondaryDiagonal(int a[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i + j == N - 1) {
                cout << a[i][j] << " ";
                break; 
            }
        }
    }
}

int main() {
    int num[N][N];

    cout << "Enter Your Array:\n";
    inputMatrix(num);

    cout << "Secondary Diagonal: ";
    printSecondaryDiagonal(num);
	 // for wait Program to exit 
	int wait;
	cin >> wait;
    return 0;
}

