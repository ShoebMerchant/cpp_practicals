#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, f = 1;
    do
    {
        cout << "Enter a positive number: ";
        cin >> num;
        if (num < 0)
        {
            cout << "Invalid number";
        }
    } while (num < 0);
    for (int i = 2; i < num; i++)
    {
        cout << f << " ";
        f += i;
    }
    return 0;
}