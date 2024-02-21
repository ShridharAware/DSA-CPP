// CodingNinja - Sort 0 1 2
#include <iostream>
#include <algorithm>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// void sortZeroOneTwo(int arr[], int n)
// {
//     int f = 0, l = n - 1;
//     for (int i = 0; i < n && i <= l; i++)
//     {
//         if (arr[i] == 0)
//         {
//             swap(arr[i], arr[f]);
//             f++;
//         }
//         else if (arr[i] == 2)
//         {
//             swap(arr[i], arr[l]);
//             f++;
//             l--;
//         }
//     }
// }

void sortZeroOneTwo(int arr[], int n)
{
    int i = 0, mid = 0, j = n - 1;
    while (mid < j)
    {
        while (arr[mid] == 0 && i < mid)
        {
            swap(arr[i], arr[mid]);
            i++;
            mid++;
        }
        while (arr[mid] == 1 && i < mid)
        {
            swap(arr[i], arr[mid]);
            i++;
        }
    }
}

int main()
{
    int arr[7] = {0, 1, 2, 1, 2, 1, 2};
    cout << "Before sorting : ";
    printArray(arr, 7);
    cout << endl;

    sortZeroOneTwo(arr, 7);
    cout << "After sorting : ";
    printArray(arr, 7);
}