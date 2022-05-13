#include <iostream>
using namespace std;
/**
 * Write a program to find sum of numbers between 1 to n
 * using constructor where value of n will be passed to the constructor.
 */

class SumOfNumbers
{
public:
    SumOfNumbers(int n)
    {
        int sum = 0;
        for (int i = 2; i < n; i++)
            sum += i;
        cout << "Sum of numbers : " << sum << endl;
    }
};
int main()
{
    SumOfNumbers sum(5);
    return 0;
}