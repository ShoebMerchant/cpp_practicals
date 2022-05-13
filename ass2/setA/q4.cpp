#include <iostream>
using namespace std;
#include <string.h>

/**
 * 4. Define a class string to perform different operations:
 * a. To find length of string.
 * b. To concatenate two strings.
 * c. To reverse the string.
 * d. To compare two strings.
 */

class String
{
    char str[100];

public:
    void inputStr()
    {
        cout << "Enter a string : ";
        cin >> str;
        return;
    }
    char *get_str()
    {
        return str;
    }

    // a. To find length of string.
    int strLen()
    {
        int count = 0;
        for (; str[count]; count++)
            ;
        return count;
    }

    // b. To concatenate two strings.
    void strcat(String str1)
    {
        cout << "Concatenating " << str << " with " << str1.get_str() << " we get : ";
        int sl = strLen(); // str length
        char *s1 = str1.get_str();
        for (int j = 0, i = sl - 1; j < sl - 1; j++)
            str[i++] = s1[j];
        cout << str << endl;
        return;
    }

    // c. To reverse the string.
    void strrev()
    {
        cout << "reversing " << str << " : ";
        int l = strLen() - 1;
        char temp[l + 1];
        for (int i = l, j = 0; i >= 0; i--, j++)
            temp[j] = str[i];
        cout << temp << endl;
        return;
    }

    // d. To compare two strings.
    bool strcmp(String str1)
    {
        cout << "Comparing two string " << str << " with " << str1.get_str() << " The result is ";
        int l = strLen() - 1;       // length of str
        int l1 = str1.strLen() - 1; // length of str1
        char *temp = str1.get_str();

        if (l != l1)
            return false;

        for (int i = 0; i < l; i++)
            if (str[i] != temp[i])
                return false;

        return true;
    }
};
int main()
{
    String str, str1;
    str.inputStr();
    str1.inputStr();
    cout << "Length of String " << str.get_str() << " is : " << str.strLen() << endl;
    cout << "Length of String " << str1.get_str() << " is : " << str1.strLen() << endl;
    str.strcat(str1);
    // str.strrev();
    // cout << str.strcmp(str1) << endl;
    return 0;
}