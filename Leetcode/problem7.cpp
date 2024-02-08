// Swapping alternative items in array - Ninja

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}
void swapAlternatively(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size = 10;

    cout << "Before swapping alternatively : ";
    printArray(arr, size);
    cout << endl;

    swapAlternatively(arr, size);

    cout << "After swapping alternatively : ";
    printArray(arr, size);
    cout << endl;
}