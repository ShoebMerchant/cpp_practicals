/**
 *  Create a base class Student (Roll_No, Name) which derives two classes Theory and Practical.
 *  Theory class contains marks of five Subjects and Practical class contains marks of two practical subjects.
 *  Class Result (Total_Marks, Class) inherits both Theory and Practical classes. (Use concept of Virtual Base Class)
 *  Write a C++ menu driven program to perform the following functions:
 *  Build a master table
 *  Display a master table
 *  Calculate Total_marks and class obtained
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
protected:
    int roll_no;
    string name;

public:
    virtual void set_data()
    {
        cout << "Enter Student's roll number : ";
        cin >> roll_no;
        cout << "Enter Student's name : ";
        cin >> name;
    }
};

class Theory : protected virtual Student
{
protected:
    int marks_in_math;
    int marks_in_science;
    int marks_in_english;
    int marks_in_bio;
    int marks_in_foc;

public:
    void set_data()
    {
        Student::set_data();
        // cout << "Enter Student's roll number : ";
        // cin >> roll_no;
        // cout << "Enter Student's name : ";
        // cin >> name;
        cout << "Enter Theory Marks : ";
        cin >> marks_in_math >> marks_in_science >> marks_in_english >> marks_in_bio >> marks_in_foc;
    }
    void display_theory_marks() {
        cout << marks_in_math << marks_in_science << marks_in_english << marks_in_bio << marks_in_foc << endl;
    }
};

class Practical : protected virtual Student
{
protected:
    int marks_in_pe;
    int marks_in_chem;

public:
    void set_data()
    {
        // cout << "Enter Student's roll number : ";
        // cin >> roll_no;
        // cout << "Enter Student's name : ";
        // cin >> name;
        cout << "Enter Practical's makrs : ";
        cin >> marks_in_pe >> marks_in_chem;
    }
    void display_practical_marks() {
        cout << marks_in_pe << marks_in_chem << endl;
    }
};

class Result : protected Theory, protected Practical
{
    int total_marks;
    // string Class;

public:
    void set_data()
    {
        Theory::set_data();
        Practical::set_data();
        display_stud_stats();
        // cout << "Enter Student's roll number : ";
        // cin >> roll_no;
        // cout << "Enter Student's name : ";
        // cin >> name;
        // cout << "Enter Theory Marks : ";
        // cin >> marks_in_math >> marks_in_science >> marks_in_english >> marks_in_bio >> marks_in_foc;
        // cout << "Enter Practical's makrs : ";
        // cin >> marks_in_pe >> marks_in_chem;
    }
    void display_stud_stats();
};

void Result::display_stud_stats(){
    Theory::display_theory_marks();
    Practical::display_practical_marks();
};

void display_options()
{
    cout << "To add a student press: 1" << endl;
    cout << "To add a result press: 2" << endl;
    cout << "To add theory marks press: 3" << endl;
    cout << "To add Practical marks press: 4" << endl;
}

int main()
{
    Result r;
    r.set_data();
    return 0;
}