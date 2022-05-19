/**
 * Write a C++ program to create a class Date which contains three data members as dd, mm, and yyyy.
 * Create and initialize the object by using parameterized constructor and display date in dd-mon-yyyy format.
 * (Input: 19-12-2014 Output: 19-Dec-2014) Perform validation for month.
 */

#include <iostream>
using namespace std;
string MONTH_FORMAT[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "July", "Aug", "Sep", "Oct", "Nov", "Dec"};
class Date
{
    int dd;   // day
    int mm;   // month
    int yyyy; // year
public:
    Date(int, int, int);
};

Date::Date(int day, int month, int year)
{
    dd = day;
    if (month > 0 && month < 13)
        mm = month;
    else
    {
        cout << "Invalid Month" << endl;
        return;
    }
    yyyy = year;
    cout << dd << "-" << MONTH_FORMAT[mm] << "-" << yyyy << endl;
}

int main()
{
    Date d(24, 11, 2020);
    return 0;
}