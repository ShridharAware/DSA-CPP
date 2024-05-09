#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> getLargest(vector<int> arr, int k)
{
    vector<int> res;
    vector<vector<int>> subArrays;
    for (int i = 0; i < arr.size() - 2; i++)
    {
        vector<int> temp;
        temp.push_back(arr[i]);
        temp.push_back(arr[i + 1]);
        temp.push_back(arr[i + 2]);
        subArrays.push_back(temp);
    }

    for (vector<int> a : subArrays)
    {
        int maxNum = *max_element(a.begin(), a.end());
        res.push_back(maxNum);
    }
    return res;
}

int main()
{
    vector<int> arr = {2, 4, 7, 1, 6, 3};
    vector<int> res = getLargest(arr, 3);
    for (int i : res)
    {
        cout << i << " ";
    }
}