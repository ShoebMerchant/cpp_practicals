/**
 * Write a C++ program to create two classes Rectangle1 and Rectangle2.
 * Compare area of both the rectangles using friend function.
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

inline double area_rectangle(double length, double width)
{
    return length * width;
}

class Rectangle1;
class Rectangle
{
    double length;
    double width;

public:
    void getData()
    {
        cout << "Enter dimensions for first Rectangle" << endl;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
    friend void compare_area(Rectangle, Rectangle1);
};

class Rectangle1
{
    double length;
    double width;

public:
    void getData()
    {
        cout << "Enter dimensions for second Rectangle" << endl;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
    friend void compare_area(Rectangle, Rectangle1);
};

void compare_area(Rectangle a, Rectangle1 b)
{
    if (area_rectangle(a.length, a.width) > area_rectangle(b.length, b.width))
    {
        cout << "The first rectangle has bigger area" << endl;
        return;
    }
    cout << "The second rectangle has bigger area" << endl;
}

int main()
{
    Rectangle a;
    Rectangle1 b;
    a.getData();
    b.getData();
    compare_area(a, b);
    return 0;
}