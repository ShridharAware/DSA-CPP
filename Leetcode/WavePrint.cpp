#include <iostream>
#include <vector>
using namespace std;

void wavePattern(vector<vector<int>> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {

        if (i % 2 == 0)
        {
            for (int j = 0; j < nums[i].size(); j++)
            {
                cout << nums[j][i] << "  ";
            }
            cout << endl;
        }
        else
        {
            for (int j = nums[i].size() - 1; j >= 0; j--)
            {
                cout << nums[j][i] << "  ";
            }
            cout << endl;
        }
    }
}

int main()
{
    vector<vector<int>> nums = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    wavePattern(nums);
}