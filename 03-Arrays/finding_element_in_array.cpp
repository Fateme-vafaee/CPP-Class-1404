#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;   
        }
    }
    return -1; 
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int target;

    cout << "Enter Your Target: ";
    cin >> target;

    int index = linearSearch(arr, 5, target);

    if (index != -1) {
        cout << "Found your number at index " << index << endl;
    } else {
        cout << "Number not found." << endl;
    }
	 // for wait Program to exit 
	int wait;
	cin >> wait;
    return 0;
}

