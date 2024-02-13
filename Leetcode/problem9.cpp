// Find duplicates - Ninja
#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> &arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    vector<int> arr(5);
    arr = {1, 2, 2, 4, 3};
    cout << "Duplicate element in array is : " << findDuplicate(arr);
}