#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream storyFile, asciiStory;
    asciiStory.open("story.txt", ios::out);
    storyFile.open("shoeb.txt", ios::in);
    if (storyFile.is_open() && asciiStory.is_open())
    {
        string line;
        while (getline(storyFile, line))
        {
            cout << line << endl;
            for (int i = 0; i < line.length(); i++)
            {
                asciiStory << int(line[i]) << endl;
            }
        }
        asciiStory.close();
        storyFile.close();
    }
    return 0;
}