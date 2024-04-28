#include <iostream>
#include <vector>
using namespace std;
void printArr(vector<int> arr)
{
    cout << "[";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";

    cout << endl;
}

void printRes(vector<vector<int>> res)
{
    cout << "[";
    for (int i = 0; i < res.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "]";
    }
    cout << "]";
}

vector<vector<int>> twoSum(vector<int> arr, int sum)
{
    vector<vector<int>> res;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 1; j < arr.size(); j++)
        {

            if ((arr[i] + arr[j]) == sum)
            {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                res.push_back(temp);
                temp.clear();
            }
        }
    }
    return res;
}
int main()
{
    vector<int> arr = {1, 3, -2, 6, 8, 10, -4, 2};
    int sum = 4;
    vector<vector<int>> res = twoSum(arr, sum);
    printArr(arr);
    printRes(res);
}