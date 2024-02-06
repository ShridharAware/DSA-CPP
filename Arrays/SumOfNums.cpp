#include <iostream>
using namespace std;
int SumOfNums(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[100], size;
    cout << "Enter size of the array : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " number in array : ";
        cin >> arr[i];
    }
    cout << "Sum of all elements in array is " << SumOfNums(arr, size) << ".";
}