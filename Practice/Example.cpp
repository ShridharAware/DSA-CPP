#include <iostream>
#include <array>
using namespace std;
int main()
{
    int a[8] = {1, 1, 3, 4, 5, 6, 2, 7};
    int size = sizeof(a) / sizeof(a[0]);
    int b = 0;
    for (int i = 0; i < size; i++)
    {
        b = b ^ a[i];
        cout << b;
    }
    cout << endl;
    for (int i = 1; i < size; i++)
    {
        b = b ^ i;
        cout << b;
    }
}