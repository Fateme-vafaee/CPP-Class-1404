//برنامه ای بنویسید که تا زمانی که عدد -1 وارد نشده از ورودی عدد دریافت کنه
// سپس میانگین اعداد وارد شده رو چاپ کنه

#include <iostream>

using namespace std;

int main()
{

    float sum = 0.0;
    int counter = 0;
    float number = 0.0;
    float average = 0.0;
    cout << "Please enter the " << counter+1 << "th number : ";
    cin >> number;
    while (number != -1)
    {
        sum += number;
        counter++;
        cout << "Please enter the " << counter+1 << "th number : ";
        cin >> number;
    }

    average = sum / counter ;
    cout << "The average is: " << average << endl;
        
    // for wait Program to exit
    int wait;
    cin >> wait;
    return 0;
}