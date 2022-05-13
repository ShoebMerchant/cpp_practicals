/**
 * Write a program to design a class complex to represent complex number.
 * The complex class should use an external function (use it as a friend function) to add two complex number.
 * The function should return an object of type complex representing the sum of two complex numbers.
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    // Constructor
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    void display()
    {
        cout << "Complex numbers are " << real << ", " << imaginary << endl;
    }
    friend Complex sum(Complex, Complex);
};

Complex sum(Complex a, Complex b)
{
    Complex s(a.real + b.real, a.imaginary + b.imaginary);
    return s;
}

int main()
{
    Complex a(1, 5), b(5, 2);
    a.display();
    b.display();
    Complex c = sum(a, b);
    cout << "Sum of ";
    c.display();
    return 0;
}