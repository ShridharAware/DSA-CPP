#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {1, 90, 355, 32, 55, 35, 32, 222, 43, 55};
    int element;
    cout << "Enter number to check if it is present in array or not : ";
    cin >> element;
    bool isPresent = linearSearch(arr, 10, element);
    if (isPresent)
    {
        cout << element << " is present in array.";
    }
    else
    {
        cout << element << " is not present in array.";
    }
}