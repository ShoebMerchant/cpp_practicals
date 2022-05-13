#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/**
 * Write a C++ program to create a class Number
 * which contains two integer data members.
 * Create and initialize the object by using default constructor,
 * parameterized constructor.
 * Write a member function to display maximum from given two numbers for all objects.
 */

class Number
{
    int a, b;

public:
    // Parameterized contructor
    Number(int x, int y) { a = x, b = y; }

    void putData() { cout << "Number " << a << " " << b << endl; }

    int max_of_numbers(Number n)
    {
        return max(max(a, b), max(n.a, n.b));
    }
};

int main()
{
    Number x1(54, 24), y1(65, 33);
    x1.putData();
    y1.putData();
    cout << "Max of Numbers : " << x1.max_of_numbers(y1) << endl;
    return 0;
}