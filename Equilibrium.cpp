#include <iostream>
#include <vector>
using namespace std;
int findEquilibrium(vector<int> &arr)
{
    int totalSum = 0;
    int leftSum = 0;
    for (int num : arr)
    {
        totalSum += num;
    }
    for (int i = 0; i < arr.size(); ++i)
    {
        totalSum -= arr[i];
        if (leftSum == totalSum)
        {
            return arr[i];
        }
        leftSum += arr[i];
    }
    return 0;
}
int main()
{
    vector<int> arr1 = {1, 7, 5, 2, 6};
    int result1 = findEquilibrium(arr1);
    cout << "Output 1: " << result1 << endl;
    return 0;
}
