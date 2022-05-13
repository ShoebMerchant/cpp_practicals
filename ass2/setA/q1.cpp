#include <iostream>
#include <math.h>
using namespace std;

class Cylinder
{
    float radius;
    float height;

public:
    void setRadius(float);
    void setHeight(float);
    float volume();
    float area();
};

void Cylinder::setRadius(float radius)
{
    this->radius = radius;
}

void Cylinder::setHeight(float h)
{
    height = h;
}

float Cylinder::volume()
{
    return M_PI * radius * radius * height;
}

float Cylinder::area()
{
    return 2 * M_PI * radius * (radius + height);
}

int main()
{
    Cylinder c1, c2;
    c1.setRadius(5);
    c1.setHeight(4);
    cout << c1.volume() << endl
         << c1.area() << endl;

    c2.setRadius(4);
    c2.setHeight(5);
    cout << c2.volume() << endl
         << c2.area() << endl;

    return 0;
}