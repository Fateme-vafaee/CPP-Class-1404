#include <iostream>
using namespace std;

class ChildSample;

class Sample;

class Sample
{
private:
    // private for use only inside the class
    // فقط برای استفاده در داخل کلاس

    int secret;
    string data;

public:
    // public for use outside the class
    // برای استفاده در خارج از کلاس

    int id;

    /// @brief constructor function for initializing private data
    ///
    /// تابع سازنده برای مقداردهی اولیه اعضای داده خصوصی
    /// @param s int (for secret)
    /// @param d string (for data)
    Sample(int s, string d)
    {
        if (s != 0)
        {
            secret = s;
        }

        if (d != "")
        {
            data = d;
        }
    }

    /// @brief  this is a public method to print private data
    ///
    /// این یک متد عمومی برای چاپ داده‌های خصوصی است
    void printInfo()
    {
        cout << "Secret: " << secret << endl;
        cout << "Data: " << data << endl;
    }
    /// @brief مقدار secret را تنظیم می‌کند
    /// @param s
    void setSecret(int s)
    {
        if (s != 0)
        {
            secret = s;
        }
    }
    /// @brief مقدار data را تنظیم می‌کند
    /// @param d
    void setData(string d)
    {
        if (d != "")
        {
            data = d;
        }
    }

protected:
    // protected for use inside the class and by derived classes
    // استفاده در داخل کلاس و کلاس‌های فرزند

    // (not used in this example)
};

/// @brief مثال از ارث‌بری و دسترسی به اعضای خصوصی
/// @details در این مثال، کلاس ChildSample از کلاس Sample ارث‌بری می‌کند
class ChildSample : public Sample
{

public:
    ChildSample(int s, string d) : Sample(s, d)
    {
        // Constructor of ChildSample
        // می‌تواند از سازنده کلاس پایه استفاده کند
    }

    bool child = true;

    /// @brief مقدار های اولیه را با استفاده از متد های از پیش تعیین شده تنظیم میکند
    /// @param s int (for secret)
    /// @param d string (for data)
    void setValue(int s, string d)
    {
        // Cannot access private members directly
        // secret = s; // Error
        // data = d;   // Error

        // But can use public methods if available
        setSecret(s);
        setData(d);
    }

    /// @brief نمایش وضعیت کلاس فرزند و نمونه از متد هایی که برای خودش دارد
    void displayChildStatus()
    {
        cout << "Is child class: " << child << endl;
    }
};

int main()
{
    cout << "-------Sample Info-------" << endl;

    // create an object of Sample class
    //  ایجاد یک شی از کلاس Sample
    Sample sample1(42, "Hello, World!");

    // print the private data using public method
    //  چاپ داده‌های خصوصی با استفاده از متد عمومی
    sample1.printInfo();

    // ساخت یک ارایه از اشیاء کلاس Sample

    Sample samples[] = {
        Sample(1, "Data 1"),
        Sample(2, "Data 2"),
        Sample(3, "Data 3")};

    for (int i = 0; i < 3; i++)
    {
        samples[i].printInfo();
    }
    cout << "----Child Sample Info----" << endl;
    // create an object of ChildSample class
    // ایجاد یک شی از کلاس ChildSample
    ChildSample childSample(99, "Child Data");
    ChildSample childSamples[] = {
        ChildSample(10, "Child Data 1"),
        ChildSample(20, "Child Data 2"),
        ChildSample(30, "Child Data 3")};
    for (int i = 0; i < 3; i++)
    {
        childSamples[i].printInfo();
        childSample.displayChildStatus();
    }


    return 0;
}