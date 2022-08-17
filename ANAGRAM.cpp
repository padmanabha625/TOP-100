#include <iostream>
using namespace std;
int main()
{
    char str1[100], str2[100];
    int first[26] = {0}, second[26] = {0}, c = 0, flag = 0;

    cout << "enter the first string: ";
    gets(str1);
    cout << "enter th 2nd string: ";
    gets(str2);

    while (str1[c] != '/0')
    {
        first[str1[c] - 'a']++;
        c++;
    }
    c = 0;
    while (str1[c] != '/0')
    {
        first[str2[c] - 'a']++;
        c++;
    }
    for (c = 0; c < 26; c++)
    {
        if (first[c] != second[c])
            (flag == 0);
    }
    if (flag == 0)
    {
        cout << "strings are anagram.";
    }
    else
    {
        cout << "strings are not anagram.";
    }
    return 0;
}