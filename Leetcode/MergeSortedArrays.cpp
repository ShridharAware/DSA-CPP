#include <iostream>
using namespace std;

void mergeSortedArr(int a[], int size_a, int b[], int size_b, int res[])
{
    int i = 0, j = 0, k = 0;
    while (i < size_a && j < size_b)
    {
        if (a[i] < b[j])
        {
            res[k++] = a[i++];
        }
        else
        {
            res[k++] = b[j++];
        }
    }
    while (i < size_a)
    {
        res[k++] = a[i++];
    }
    while (j < size_b)
    {
        res[k++] = b[j++];
    }
}

void printArray(int res[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << res[i] << ", ";
    }
}
int main()
{
    int arr1[] = {1, 2, 4, 6};
    int arr2[] = {3, 5, 8};
    int res[7] = {0};
    mergeSortedArr(arr1, 4, arr2, 3, res);
    printArray(res, 7);
}