#include <iostream>
#include <algorithm>
using namespace std;

void revName(char name[], int i)
{
    int s = 0, e = i - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
int main()
{
    char name[20];
    cout << "Enter your name : ";
    cin >> name;
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
    }
    revName(name, i);
    cout << name;
}