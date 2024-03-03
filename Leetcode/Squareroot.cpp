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
int main()
{
    int num = 49;
    int ans = sqrt(num);
    cout << "Square root of " << num << " is " << ans << ".";
}