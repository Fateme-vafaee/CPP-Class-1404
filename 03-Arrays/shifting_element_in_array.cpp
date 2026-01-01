#include <iostream>
using namespace std;

int deleteElement(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;     
            break;   
        }
    }
    return n; 
}

int main() {
    int num[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int target;

    cout << "Enter Your Target: ";
    cin >> target;

    n = deleteElement(num, n, target);

    cout << "Array After Delete: ";
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
	 // for wait Program to exit 
	int wait;
	cin >> wait;
    return 0;
}

