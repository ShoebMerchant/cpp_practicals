#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream myFile;
    // myFile.open("shoeb.txt", ios::out); // write
    // if (myFile.is_open())
    // {
    //     myFile << "Hello world!" << endl;
    //     myFile << "Second Line" << endl;
    //     myFile.close();
    // }
    // myFile.open("shoeb.txt", ios::app); // append
    // if (myFile.is_open())
    // {
    //     myFile << "Hello world2!" << endl;
    //     myFile.close();
    // }
    myFile.open("shoeb.txt", ios::in); // read
    if (myFile.is_open())
    {
        string line;
        while (getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
    }
    return 0;
}