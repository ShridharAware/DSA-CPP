#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int num)
{
    vector<vector<int>> res;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == num)
            {
                vector<int> temp;

                temp.push_back(arr[i]);
                temp.push_back(arr[j]);

                res.push_back(temp);
            }
        }
    }
    sort(res.begin(), res.end());
    return res;
}
int main()
{
    vector<int> arr = {3, 4, 5, 1, 2};
    int num = 9;
    vector<vector<int>> res = pairSum(arr, num);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
    }
}