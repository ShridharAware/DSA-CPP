// Is power of 2

// Use same logic for power of 3 and power of 4

#include <iostream>
#include <math.h>
using namespace std;

bool isPow(int n)
{
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int num;
    cout << "Enter number : ";
    cin >> num;
    if (isPow(num))
    {
        cout << num << " is in power of 2.";
    }
    else
    {
        cout << num << " is not in power of 2.";
    }
}
