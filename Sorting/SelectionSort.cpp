#include <iostream>
using namespace std;

void printArray(int nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << ", ";
    }
}

void selectionSort(int nums[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (nums[j] < nums[minIndex])
            {
                minIndex = j;
            }
        }
        swap(nums[minIndex], nums[i]);
    }
}

int main()
{
    int size;
    cout << "Enter size of the array : ";
    cin >> size;

    int *nums = new int[size];

    cout << "Insert elements in the array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " element : ";
        cin >> nums[i];
    }

    cout << "Before sorting : ";
    printArray(nums, size);
    cout << endl;

    cout << "After sorting : ";
    selectionSort(nums, size);
    printArray(nums, size);

    delete[] nums;

    return 0;
}
