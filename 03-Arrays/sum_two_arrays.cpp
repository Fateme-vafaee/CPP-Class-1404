#include <iostream>
using namespace std;

void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void mergeArrays(int a[], int y, int b[], int x, int c[]) {
    int k = 0;

    for (int i = 0; i < y; i++)
        c[k++] = a[i];

    for (int i = 0; i < x; i++)
        c[k++] = b[i];
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    int y = 5;
    int x = 7;

    int a[y];
    int b[x];
    int c[y + x];

    cout << "Enter Your First Array: ";
    inputArray(a, y);

    cout << "Enter Your Second Array: ";
    inputArray(b, x);

    mergeArrays(a, y, b, x, c);

    cout << "Merged Array: ";
    printArray(c, y + x);
	 // for wait Program to exit 
	int wait;
	cin >> wait;
    return 0;
}

