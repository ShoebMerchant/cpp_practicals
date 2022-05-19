#include <iostream>
#include <cstring>
using namespace std;

class books
{
    char title[30];

public:
    books(){};
    books(char *);
    void getData();
    void putData();
};
books::books(char *str) { strcpy(title, str); }
void books::putData()
{
    cin >> title;
}
void books::getData()
{
    cout << title << endl;
}

int main()
{
    books *b[2];
    for (int i = 0; i < 2; i++)
        b[i] = new books;
    for (int i = 0; i < 2; i++)
        b[i]->putData();
    for (int i = 0; i < 2; i++)
        b[i]->getData();
}