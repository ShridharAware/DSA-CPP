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

void InsertionSort(int nums[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = nums[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (nums[j] > temp)
            {
                nums[j + 1] = nums[j];
            }
            else
            {
                break;
            }
        }
        nums[j + 1] = temp;
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
    InsertionSort(nums, size);
    printArray(nums, size);

    delete[] nums;

    return 0;
}