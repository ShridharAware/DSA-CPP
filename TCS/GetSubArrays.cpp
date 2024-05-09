#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> getArrays(vector<int> nums, int head, int tail)
{
    vector<vector<int>> res;
    if (tail == nums.size())
        return res;
    else if (head > tail)
        getArrays(nums, 0, tail + 1);
    else
    {
        // vector<int> temp1;
        for (int i = head; i < tail; i++)
        {
            // temp1.push_back(nums[head]);
            cout << nums[i] << " ";
        }
        cout << nums[tail] << endl;
        getArrays(nums, head + 1, tail);
    }
    return res;
}

int main()
{
    vector<vector<int>> subArrays;
    vector<int> nums = {10, 2, 3, -2, 8, 6};
    int sum = 8;
    subArrays = getArrays(nums, 0, 0);
}