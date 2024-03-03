// Leetcode - Search in rotated sorted array
#include <iostream>
#include <vector>
using namespace std;

int findElement(vector<int> arr, int start, int end, int key)
{
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            int res = mid;
            return res;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int findPivote(vector<int> arr)
{
    int start = 0, end = arr.size() - 1, mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
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
    vector<int> arr = {7, 8, 2, 4, 5};
    int result = -1, key = 10;
    int pivote = findPivote(arr);
    if (key <= arr[pivote - 1] && key >= arr[0])
    {
        int start = 0, end = pivote - 1;
        result = findElement(arr, start, end, key);
    }
    else
    {
        int start = pivote, end = arr.size() - 1;
        result = findElement(arr, start, end, key);
    }

    cout << result;
}