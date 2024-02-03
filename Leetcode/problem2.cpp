// Number of 1's in unsigned int in number

#include <iostream>
using namespace std;
int main()
{
    uint32_t num;
    cout << "Enter number : ";
    cin >> num;
    int count = 0;
    while (num != 0)
    {
        if (num & 1)
        {
            count++;
        }
        num = num >> 1;
    }
    cout << "Number of 1's in unsigned int are " << count;
}