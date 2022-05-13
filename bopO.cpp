#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Char
{
    // declare data member or variables
    char ch;

public:
    void inp()
    {
        cout << " Input Char : ";
        cin >> ch;
    }

    // use binary '+' operator to overload
    string operator+(Char ch2)
    {
        string s;
        s += ch;
        s += ch2.ch;
        return s;
    }

    // char *operator+(Char ch2)
    // {
    //     char *str = (char *)malloc(3);
    //     str[0] = ch;
    //     str[1] = ch2.ch;
    //     str[2] = '\0';
    //     return str;
    // }

    char getChar()
    {
        return ch;
    }
};

int main()
{
    Char x1, y1;
    x1.inp();
    y1.inp();
    cout << x1.getChar() << endl;
    cout << y1.getChar() << endl;
    char *ch_arr = y1 + x1;
    cout << ch_arr << endl;
    return 0;
}