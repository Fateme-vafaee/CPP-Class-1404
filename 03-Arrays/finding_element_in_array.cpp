#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int target;
    cout << "Enter Your Target: ";
    cin >> target;

    bool found = false;
    int index = -1;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            found = true;
            index = i; 
            break; 
        }
    }

    if (found) {
        cout << "Found your number at index " << index << endl;
    } else {
        cout << "Number not found." << endl;
    }
      // for wait Program to exit
    int wait;
    cin >> wait;
    return 0;
}
