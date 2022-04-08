#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, i;
    do
    {
        cout << "Enter a positive number: ";
        cin >> num;
        if (num < 0)
        {
            cout << "Invalid number";
        }
    } while (num < 0);

    cout << "Factors of " << num << " are: ";
    for (i = 1; i <= num; ++i)
    {
        if (num % i == 0)
            cout << i << " ";
    }
    return 0;
}