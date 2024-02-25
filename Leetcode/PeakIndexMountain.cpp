// PeakIndexInMountainArray - Leetcode
#include <iostream>
#include <vector>
using namespace std;

int findPeakIndex(vector<int> arr)
{
    int start = 0, end = arr.size() - 1, mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    vector<int> arr = {2, 3, 8, 5, 4};
    int peak = findPeakIndex(arr);
    cout << "Peak index in mountain array is : " << peak << endl;
}