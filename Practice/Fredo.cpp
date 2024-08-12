#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getFredo(int size, vector<int> arr)
{
    int sum = 0, data = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int a : arr)
    {
        if (a * size > sum)
        {
            data = a;
            break;
        }
    }
    return data;
}
int main()
{
    int num;
    cin >> num;                                // Reading input from STDIN
    cout << "Input number is " << num << endl; // Writing output to STDOUT
    vector<int> arr;
    for (int i = 0; i < num; i++)
    {
        cout << "Input the elements in array : ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << getFredo(num, arr);
}