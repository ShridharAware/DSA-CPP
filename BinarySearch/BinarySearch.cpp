#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int key)
{
    int start = 0, end = arr.size() - 1, mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
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
int main()
{
    vector<int> arr = {1, 4, 6, 7, 8, 10, 17};
    int index = binarySearch(arr, 10);
    cout << index;
}