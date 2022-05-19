#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows, n = 1;
    cout << "Enter how many rows do you want: ";
    do
    {
        cin >> rows;
    } while (rows < 0);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << n++ << " ";
        }
        cout << endl;
    }
    return 0;
}