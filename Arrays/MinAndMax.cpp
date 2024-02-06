#include <iostream>
using namespace std;
int getMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int getMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int numbers[100], size;
    cout << "Enter size of an array : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " element of an array : ";
        cin >> numbers[i];
    }
    cout << "Minimum number from given array of elements is " << getMin(numbers, size) << "." << endl;
    cout << "Maximum number from given array of elements is " << getMax(numbers, size) << "." << endl;
}