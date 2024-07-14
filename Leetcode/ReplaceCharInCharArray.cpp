#include <iostream>
using namespace std;
void replaceChar(char s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (s[i] == ' ')
        {
            s[i] = '@';
        }
    }
}
int main()
{
    char s[30] = "My name is Name.";
    replaceChar(s, 16);
    cout << s;
}