#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findLargest(vector<int> num)
{
    sort(num.begin(), num.end());
    vector<int> currentSeq = {num.front()};
    vector<int> longestSeq;
    int breakPoint = 0;
    while (breakPoint <= num.size() - 1)
    {
        if (num[breakPoint] + 1 == num[breakPoint + 1])
        {
            currentSeq.push_back(num[breakPoint + 1]);
        }
        else
        {
            if (currentSeq.size() > longestSeq.size())
            {
                longestSeq = currentSeq;
            }
            currentSeq = {num[breakPoint + 1]};
        }
        breakPoint++;
    }
    if (currentSeq.size() > longestSeq.size())
    {
        longestSeq = currentSeq;
    }
    return longestSeq.back();
}

int main()
{
    vector<int> nums = {8, 9, 7, 6, 4, 3, 2, 1, 0, 11, 20, 28};
    int largeNum = findLargest(nums);
    cout << largeNum << endl;
}