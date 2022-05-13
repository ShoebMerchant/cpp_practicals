#include <iostream>
#include <cstring>
using namespace std;

class Department
{
    int dept_id;
    char dept_name[30];
    int establishment_year;
    int no_of_faculty;
    int no_of_students;

public:
    void getData()
    {
        cout << "Enter dept id: ";
        cin >> dept_id;
        cout << "Enter department name: ";
        cin >> dept_name;
        cout << "Enter establishment year: ";
        cin >> establishment_year;
        cout << "Enter number of faculty: ";
        cin >> no_of_faculty;
        cout << "Enter number of students: ";
        cin >> no_of_students;
        cout << endl;
    }

    void putData()
    {
        printf("dept id:- %d\ndepartment name:- %s\nestablishment year :- %d\nnumber of faculty :- %d\nnumber of students :- %d\n\n",
               dept_id, dept_name, establishment_year, no_of_faculty, no_of_students);
    }

    int get_dept_id() { return dept_id; }
};
int main()
{
    int n;
    cout << "Enter number of Departments : ";
    cin >> n;
    Department *depts = new Department[n];
    for (int i = 0; i < n; i++)
        depts[i].getData();
    for (int i = 0; i < n; i++)
        depts[i].putData();
    int specified_dept_id;
    cout << "Enter a specified department ID : ";
    cin >> specified_dept_id;
    bool dept_found = false;
    for (int i = 0; i < n; i++)
    {
        if (depts[i].get_dept_id() == specified_dept_id)
        {
            dept_found = true;
            cout << "Department Found : " << endl;
            depts[i].putData();
        }
    }
    if (!dept_found)
        cout << "Department Not Found" << endl;

    return 0;
}