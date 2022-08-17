#include <iostream>
using namespace std;
int main()
{
    char ch = 'a1';

    if ((ch >= 'a' &&ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        cout << "The inserted character " << ch << "is an alphabet";

    else
        cout << "the inserted character " << ch << "is not an alphabet";

    return 0;
}