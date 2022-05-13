/**
 **  What is pure virtual function?
 *  A pure virtual function is a type of function, which has only a function declaration.
 *  It does not have the function definition.
 **  Abstract class:
 *  An abstract class is one that is not used to create object.
 *  An abstract class is designed to act as a base class (to be inherited by other classes).
 *  The class, which contains pure virtual functions, is called as abstract class.
 *
 *  Write a program with Student as abstract class and create derive classes
 *  Engineering, Medicine and Science from base class Student.
 *  Create the objects of the derived classes and process them and
 *  access them using array of pointer of type base class Student.
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    virtual void putData() = 0; // Pure virtual function
    virtual void show() = 0;    // Pure virtual function
};

class Engineering : public Student
{
    int s_no;
    string s_name;
    int batch_num;

public:
    void putData()
    {
        cin >> s_no >> s_name >> batch_num;
    }
    void show()
    {
        cout << s_no << " " << s_name << " " << batch_num << endl;
    }
};

class Medicine : public Student
{
    int s_no;
    string s_name;
    int batch_num;

public:
    void putData()
    {
        cin >> s_no >> s_name >> batch_num;
    }
    void show()
    {
        cout << s_no << " " << s_name << " " << batch_num << endl;
    }
};

class Science : public Student
{
    int s_no;
    string s_name;
    int batch_num;

public:
    void putData()
    {
        cin >> s_no >> s_name >> batch_num;
    }
    void show()
    {
        cout << s_no << " " << s_name << " " << batch_num << endl;
    }
};

int main()
{
    Student *s[3];
    s[0] = new Engineering;
    s[1] = new Medicine;
    s[2] = new Science;
    for (int i = 0; i < 3; i++)
        s[i]->putData(); // RUN-TIME POLYMORPHISM
    cout << endl
         << "---------------------------------" << endl;
    for (int i = 0; i < 3; i++)
        s[i]->show();
    return 0;
}