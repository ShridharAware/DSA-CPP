#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}
void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arrr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Given arrays are :" << endl;
    printArray(arr, 10);
    cout << endl;
    printArray(arrr, 9);

    cout << endl;

    reverseArray(arr, 10);
    reverseArray(arrr, 9);
    cout << "Reverse arrays are :" << endl;
    printArray(arr, 10);
    cout << endl;
    printArray(arrr, 9);
}