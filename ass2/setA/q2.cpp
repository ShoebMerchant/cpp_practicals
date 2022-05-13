#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Distance
{
    float feet;
    float inches;

public:
    void getData()
    {
        cout << "Distance in feet : ";
        cin >> feet;
        cout << "Distance in inches : ";
        cin >> inches;
    }
    void putdata()
    {
        cout << feet << "-feets " << inches << "-inches" << endl;
    }
    void addDistance(Distance d1)
    {
        cout << feet + d1.feet << endl;
        cout << inches + d1.inches << endl;
    }
};

int main()
{
    Distance d1, d2;
    d1.getData();
    d2.getData();
    d1.putdata();
    d2.putdata();
    d1.addDistance(d2);
    return 0;
}