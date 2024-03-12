#include <iostream>
#include <vector>
using namespace std;

void printArray(int nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << ", ";
    }
}

void BubbleSort(int nums[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
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
    BubbleSort(nums, size);
    printArray(nums, size);

    delete[] nums;

    return 0;
}