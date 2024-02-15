#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> res;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        for (int j = i + 1; j < nums.size() - 1; j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);

                    res.push_back(temp);
                }
            }
        }
    }

    return res;
}

int main()
{
    vector<int> arr = {1, 5, 3, -8, 4, -2, -1, -6};
    vector<vector<int>> res = threeSum(arr);
    cout << "[";
    for (int i = 0; i < res.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j];
            if (j < res[i].size() - 1)
            {
                cout << ", ";
            }
        }
        cout << "]";
    }
    cout << "]";
}