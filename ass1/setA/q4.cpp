#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num, digit, rev = 0;

    do
    {
        cout << "Enter a positive number: ";
        cin >> num;
        if (num < 0)
        {
            cout << "Invalid number";
        }
    } while (num < 0);

    n = num;

    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    cout << " The reverse of the number is: " << rev << endl;

    if (n == rev)
        cout << " The number is a palindrome.";
    else
        cout << " The number is not a palindrome.";

    return 0;
}