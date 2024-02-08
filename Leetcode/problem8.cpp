// Finding unique element in array - Ninja

#include <iostream>
using namespace std;
int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[7] = {4, 5, 7, 5, 2, 4, 7}, size = 7;
    cout << "Unique element of array is : " << findUnique(arr, size);
}