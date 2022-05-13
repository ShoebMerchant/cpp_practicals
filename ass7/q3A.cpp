/**
 *  Design a two base classes Employee (Name, Designation) and Project(Project_Id, title).
 *  Derive a class Emp_Proj(Duration) from Employee and Project.
 *  Write a menu driven program to Build a master table.
 *  Display a master table
 *  Display Project details in the ascending order of duration.
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee
{
protected:
    string Name;
    string Designation;
};

class Project
{
protected:
    int project_id;
    string title;
};

class Emp_Proj : protected Employee,
                 protected Project
{
    int duration;

public:
    void setEmpProjData()
    {
        cout << "Enter Employee name : ";
        cin >> Name;
        cout << "Enter Designation : ";
        cin >> Designation;
        cout << "Enter Project_Id : ";
        cin >> project_id;
        cout << "Enter title : ";
        cin >> title;
        cout << "Enter duration : ";
        cin >> duration;
        cout << endl;
    }
    void getEmpProjData()
    {
        cout << "Employee name : " << Name << endl;
        cout << "Designation: " << Designation << endl;
        cout << "Project id: " << project_id << endl;
        cout << "title: " << title << endl;
        cout << "duration: " << duration << endl;
        cout << "---------------------------------" << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;
    Emp_Proj *e = new Emp_Proj[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Info for " << i << endl;
        e[i].setEmpProjData();
    }
    for (int i = 0; i < n; i++)
        e[i].getEmpProjData();
    return 0;
}