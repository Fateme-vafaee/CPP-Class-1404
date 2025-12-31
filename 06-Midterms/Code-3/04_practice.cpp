// برنامه ای بنویسید که یک عدد صحیح را از ورودی دریافت کند و مشخص کند
// برای خورد کردن چنین مقدار پولی با سکه های 1 تومانی، 2 تومانی، 10 تومانی
// به حداقل چند سکه نیاز داریم

#include <iostream>
using namespace std;

int main()
{
    int money;
    cout << "Please enter the amount of money";
    cin >> money;

    int coin10 = money / 10;
    money %= 10;

    int coin2 = money / 2;
    money %= 2;

    int coin1 = money;

    cout << "10 tomani: " << coin10 << endl;
    cout << "2 tomani: " << coin2 << endl;
    cout << "1 tomani: " << coin1 << endl;

    // for wait Program to exit
    int wait;
    cin >> wait;
    return 0;
}
