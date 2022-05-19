#include <iostream>
#include <fstream>
#include <string>
#include <charconv>
using namespace std;

int main()
{
    fstream asciiFile, convertedFile;
    convertedFile.open("convertedFile.txt", ios::out);
    asciiFile.open("story.txt", ios::in);
    if (asciiFile.is_open() && convertedFile.is_open())
    {
        string line;
        while (getline(asciiFile, line))
        {
            cout << stoi(line) << endl;
            convertedFile << char(stoi(line));
        }
        convertedFile.close();
        asciiFile.close();
    }
    return 0;
}