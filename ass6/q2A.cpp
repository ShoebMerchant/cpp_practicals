/**
 * Write a C++ program to create a class employee containing salary as a data member.
 * Write necessary member functions to overload the operator unary pre and post decrement "--" for incrementing and decrementing salary.
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int salary;

public:
    Employee(int s) { salary = s; }
    int operator--()
    {
        return --salary;
    }
    int operator--(int i)
    {
        return salary--;
    };
    int get_salary()
    {
        return salary;
    };
};

int main()
{
    Employee e(544);
    cout << "Salary: " << e.get_salary() << endl;
    cout << "pre-decrement : " << --e << endl;
    cout << "Salary: " << e.get_salary() << endl;
    cout << "post-decrement : " << e-- << endl;
    cout << "Salary: " << e.get_salary() << endl;
    return 0;
}