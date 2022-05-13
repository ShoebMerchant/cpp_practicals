/**
 * Create a class String which contains a character pointer (Use new and delete operator).
 * Write a C++ program to overload following operators:
 **  ! To reverse the case of each alphabet from given string
 **  [ ] To print a character present at specified index
 **  < To compare length of two strings
 **  == To check equality of two strings
 **  + To concatenate twostrings
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class String
{
    char *str;
    int length;

public:
    String()
    {
        length = 0;
        str = new char[1];
    }

    String(char *s)
    {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }

    void display()
    {
        cout << str << endl;
    }

    void operator!();
    void operator[](int);
    void operator<(String);

    ~String()
    {
        delete[] str;
    }
};

void String::operator!()
{
    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 65 && str[i] <= 96)
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    cout << "Reverse Case String is  :  " << str << endl;
}

void String::operator[](int i)
{
    cout << str[i] << endl;
}

void String::operator<(String s1)
{
    if (length < s1.length)
    {
        cout << "Length of " << str << " is less than " << s1.str << endl;
        return;
    }
    if (length > s1.length)
    {
        cout << "Length of " << str << " is greater than " << s1.str << endl;
        return;
    }
    cout << "Length of " << str << " is euqal to " << s1.str << endl;
}

int main()
{
    String s("Hello"), s1("World!");
    s.display();
    !s;
    s[2];
    s < s1;
    return 0;
}