// Intersection of an arrays

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
vector<int> intersectionOfArrays(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> res;
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr1[i] == arr2[j])
            {
                res.push_back(arr1[i]);
                arr2[j] = -1;
                break;
            }
        }
    }

    return res;
}
*/

vector<int> intersectionOfArrays(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> res;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int i = 0, j = 0;
    int n = arr1.size(), m = arr2.size();
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            res.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return res;
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 1};
    vector<int> res = intersectionOfArrays(arr1, arr2);
    cout << "Intersection of arrays is : ";
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << ", ";
    }
}