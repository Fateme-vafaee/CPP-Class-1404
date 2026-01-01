#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[5] = {1, 3, 5, 7, 9};
    int n = 5; 
    int target;

    cout << "Enter Your Target: ";
    cin >> target;

    int index = binarySearch(arr, n, target);

    if (index != -1)
        cout << "Found at index " << index;
    else
        cout << "Not found";
     // for wait Program to exit 
	int wait;
	cin >> wait;
    return 0;
}

