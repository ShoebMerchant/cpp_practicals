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
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (j > (rows - i - 1))
                cout << n++ << "\t";
            else
                cout << "\t";
        }
        cout << endl;
    }
    return 0;
}