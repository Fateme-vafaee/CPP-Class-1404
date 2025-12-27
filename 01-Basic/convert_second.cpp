#include <iostream>
using namespace std;


int main()
{
    int seconds = 0;
    cout << "Please enter time in seconds: " << endl;
    cin >> seconds;

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remainingSeconds = seconds % 60;

    cout << seconds << " seconds is equivalent to: " << endl;
    cout << hours << " hours, " << minutes << " minutes, and " << remainingSeconds << " seconds." << endl;

    // for wait Program to exit
    int wait;
    cin >> wait;
    return 0;
}