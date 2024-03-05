// Ninja - Allocate books
#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> &arr, int students, int sum, int mid)
{
    int studCount = 1;
    int pageSum = 0;
    for (int i = 0; i < sum; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studCount++;
            if (studCount > students || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> &arr, int students)
{
    int start = 0, sum = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        sum += arr[i];
    }
    int end = sum, ans = -1, mid = start + (end - start) / 2;
    while (start < end)
    {
        if (isPossible(arr, students, sum, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return mid;
}
int main()
{
    vector<int> arr = {12, 34, 67, 90};
    int students = 2;
    int answer = allocateBooks(arr, students);
    cout << answer << endl;
}