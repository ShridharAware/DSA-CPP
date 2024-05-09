#include <iostream>
using namespace std;

int distinctNums(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((arr[i] | arr[j]) != arr[i])
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int arr[] = {1, 2, 3, 3, 3};
    cout << distinctNums(arr, 5);
}