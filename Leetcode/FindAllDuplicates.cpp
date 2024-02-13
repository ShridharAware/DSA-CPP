// Find all duplicates in an array
// Incomplete

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findDuplicates(vector<int> arr)
{
    sort(arr.begin(), arr.end());

    vector<int> res;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                res.push_back(arr[i]);
            }
        }
    }

    return res;
}

int main()
{
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> res = findDuplicates(arr);
    cout << "Duplicate elements in given array are : ";
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << ", ";
    }
}