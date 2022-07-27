/**
 *  Create a base class Person ( P_Code, P_Name).
 *  Derive two classes Account(Ac_No., Balance) and Official(Designation, Experience) from Person.
 *  Further derive another class Employee from both Account and Official classes.
 *  (Use Concept of Virtual BaseClass)
 *  Write a C++ menu driven program to perform the following functions: Build a master table for "n" employees.
 *  Display a master table of "n" employees. Display employees whose designation is H.O.D.
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    int p_code;
    string p_name;
};

class Account : protected virtual Person
{
protected:
    int ac_num;
    int balance;
};

class Official : protected virtual Person
{
protected:
    string designation;
    int experience;
};

class Employee : protected Account, protected Official
{
public:
    void putData()
    {
        cin >> experience;
    }
    void getData()
    {
        cout << experience << endl;
    }
};

int main()
{
    Employee *e = new Employee;
    e->putData();
    e->getData();
    return 0;
}