#include <iostream>
using namespace std;
int bitCounter(int a, int b)
{
    int count = 0;
    while (a)
    {
        int bit = a & 1;
        if (bit == 1)
        {
            count++;
        }
        a = a >> 1;
    }
    while (b)
    {
        int bit = b & 1;
        if (bit == 1)
        {
            count++;
        }
        b = b >> 1;
    }

    return count;
}
int main()
{
    int a, b;
    cout << "Enter number a : ";
    cin >> a;
    cout << "Enter number b : ";
    cin >> b;
    cout << "Total number of 1 bits in " << a << " and " << b << " is " << bitCounter(a, b) << "." << endl;
}