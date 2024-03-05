#include <iostream>
#include <vector>
using namespace std;
long long int sqrt(int x)
{
    int start = 0, end = x, mid = start + (end - start) / 2;
    long long int ans = -1;
    while (start <= end)
    {
        long long int sq = mid * mid;
        if (sq == x)
        {
            return mid;
        }
        else if (sq < x)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double preciseSqrt(int num, int precision, int temp)
{
    double factor = 1;
    double ans = temp;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < num; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int num = 37;
    int temp = sqrt(num);
    double ans = preciseSqrt(num, 3, temp);
    cout << "Square root of " << num << " is " << ans << ".";
}