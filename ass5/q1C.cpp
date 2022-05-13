/**
 * Write a C++ program to implement a class "printdata" to overload "print" function as follows:
 * void print(int) - outputs value - <int>, that is, value followed by the value of the integer.
 * ? eg. print(10) outputs value -<10>
 * void print(char *) – outputs value –"char*", that is, value followed by the string in double quotes.
 * ? eg print("hi") outputs value-"hi"
 * void print(int n, char *)- display first n characters from the given string.
 * ? eg print(3,"Object")- outputs value –"Obj"
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class printData
{
public:
    void print(int i)
    {
        cout << i << endl;
    }
    void print(char *ch)
    {
        cout << ch << endl;
    }
    void print(char *ch, int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << ch[i];
        }
        cout << endl;
    }
};

int main()
{
    printData p;
    p.print(154);
    p.print("hi");
    p.print("Hello", 3);
    return 0;
}