/**
 * 1. Write a C++ program to create a class which contains single dimensional integer array of given size.
 * Define member function to display median of a given array.
 * (Use Dynamic Constructor to allocate and Destructor to free memory of anobject)
 */

// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

class arr
{
    int *a;
    int arr_length;

public:
    arr()
    {
        int size;
        cout << "Enter Number of elements: ";
        cin >> size;
        a = new int[size]; // allocating memory dynamically
        arr_length = size;
        for (int i = 0; i < arr_length; i++)
        {
            cout << "Enter " << i << " element: ";
            cin >> a[i];
        }
    }

    double find_median()
    {
        sort(a, a + arr_length);

        if (arr_length % 2 != 0)
            return (double)a[arr_length / 2];

        return (double)(a[(arr_length - 1) / 2] + a[arr_length / 2]) / 2.0;
    }

    void display_arr()
    {
        for (size_t i = 0; i < arr_length; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    ~arr()
    {
        delete[] a;
    }
};

int main()
{
    arr list;
    list.display_arr();
    cout << "The median is : " << list.find_median() << endl;
    return 0;
}