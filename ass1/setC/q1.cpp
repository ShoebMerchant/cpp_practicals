#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows, n = 1;
    do
    {
        cout << "Enter how many rows do you want";
        cin >> rows;
        if (rows < 0)
        {
            cout << "Invalid number";
        }
    } while (rows < 0);
    for (int i = rows; i < 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << n++ << " ";
        }
        cout << endl;
    }
    return 0;
}