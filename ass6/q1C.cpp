/**
 * Create a class Fraction that contains two data members as numerator and denominator.
 * Write a C++ program to overload following operators
 ** ++ Unary(pre and post both)
 ** <<and>> Overload as friend functions
 ** < Returns 1 if first fraction is less than second fraction
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Fraction
{
    int numerator, denominator;

public:
    Fraction() {}
    Fraction(int n, int d)
    {
        numerator = n;
        denominator = d;
    }
    void operator++()
    {
        ++numerator;
        ++denominator;
    }
    void operator++(int)
    {
        numerator++;
        denominator++;
    }
    int operator<(Fraction f)
    {
        if ((numerator / denominator) < (f.numerator / f.denominator))
            return 1;
        return 0;
    }
    friend ostream &operator<<(ostream &out, const Fraction &c);
    friend istream &operator>>(istream &in, Fraction &c);
};

ostream &operator<<(ostream &out, const Fraction &c)
{
    out << c.numerator << "/" << c.denominator << endl;
    return out;
}

istream &operator>>(istream &in, Fraction &c)
{
    cout << "Enter Numerator : ";
    in >> c.numerator;
    cout << "Enter Denominator : ";
    in >> c.denominator;
    return in;
}

int main()
{
    Fraction f1, f2;
    cin >> f1 >> f2;
    // operator>>(cin, f1);
    // operator>>(cin, f2);
    cout << f1 << f2;
    cout << (f1 < f2) << endl;
    return 0;
}