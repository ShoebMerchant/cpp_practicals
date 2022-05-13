#include <iostream>
using namespace std;
/**
 * Write the definition for a class called „point‟ that has x & y as integer data members.
 * Use copy constructor to copy one object to another.
 * (Use Default and parameterized constructor to initialize the appropriate objects)
 */

class Point
{
    int x, y;

public:
    // Parameterized contructor
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    // Copy constructor
    // :: Overloading default constructor and parameterized constructor
    Point(Point &N)
    {
        x = N.x;
        y = N.y;
    }

    void putData()
    {
        cout << x << ", " << y << endl;
    }
};

int main()
{
    Point p(10, 20);
    Point p2(p);
    p.putData();
    p2.putData();
    return 0;
}