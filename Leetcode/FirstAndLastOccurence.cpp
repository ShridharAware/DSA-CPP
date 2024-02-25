// Ninja - First and last occurence of an element
#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> arr, int key)
{
    int res = -1, start = 0, end = arr.size() - 1, mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            res = mid;
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return res;
}

int lastOccurence(vector<int> arr, int key)
{
    int res = -1, start = 0, end = arr.size() - 1, mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            res = mid;
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return res;
}

pair<int, int> findOccurence(vector<int> arr, int key)
{
    pair<int, int> p;
    p.first = firstOccurence(arr, key);
    p.second = lastOccurence(arr, key);
    return p;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 5, 5};
    pair<int, int> occurence = findOccurence(arr, 5);
    cout << "First occurence at index : " << occurence.first << endl;
    cout << "Last occurence at index : " << occurence.second << endl;
}