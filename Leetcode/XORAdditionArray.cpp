// Leetcode

#include <iostream>
using namespace std;
int xorOperation(int n, int start)
{
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        int num = start + 2 * i;
        nums[i] = num;
    }
    int sum = nums[0];
    for (int i = 1; i < n; i++)
    {
        sum ^= nums[i];
    }
    return sum;
}
int main()
{
    int n = 5, start = 0;
    int sum = xorOperation(n, start);
    cout << sum;
}