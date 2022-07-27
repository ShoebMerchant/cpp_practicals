/**
 * Write a program for combining two Strings also show the execution of dynamic constructor.
 * For this declare a class String with data members as name and length.
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class String
{
    char *name;
    int length;

public:
    String()
    {
        length = 0;
        name = new char[1];
    }
    String(char *s)
    {
        length = strlen(s);
        name = new char[length + 1];
        strcpy(name, s);
    }
    void display()
    {
        cout << name << endl;
    }
    void combine(String &b);
};

void String::combine(String &b)
{
    char *temp = new char[length];
    strcpy(temp, name);

    length += b.length; // length of combined Strings
    delete[] name;
    name = new char[length];
    strcpy(name, temp);
    strcat(name, b.name);
};

int main()
{
    String n("Hello, ");
    String n1("world!");
    n.combine(n1);
    n.display();
    return 0;
}