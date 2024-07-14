#include <iostream>
#include <vector>
using namespace std;

vector<int> getCount(vector<int> nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i == j)
            {
                continue;
            }
            if (nums[i] % nums[j] == 0 || nums[j] % nums[i] == 0)
            {
                count++;
            }
        }
        ans.push_back(count);
    }

    return ans;
}
int main()
{
    vector<int> nums = {10, 10, 10, 10, 10};
    vector<int> ans = getCount(nums);
    for (int a : ans)
    {
        cout << a << ",  ";
    }
}