/**
 * Write a C++ program to print area of circle, square and rectangle using inline function.
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

inline double area_circle(double radius)
{
    return M_PI * radius * radius;
}

inline double area_square(double side)
{
    return side * side;
}

inline double area_rectangle(double length, double width)
{
    return length * width;
}

int main()
{
    cout << area_circle(4) << endl;
    cout << area_square(4) << endl;
    cout << area_rectangle(4, 5) << endl;
    return 0;
}
