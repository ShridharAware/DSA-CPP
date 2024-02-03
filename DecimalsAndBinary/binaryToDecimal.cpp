#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter number : ";
    cin >> num;
    int i = 0, ans = 0;
    while (num)
    {
        int digit = num % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        num = num / 10;
        i++;
    }

    cout << "Decimal number is " << ans << ".";
}