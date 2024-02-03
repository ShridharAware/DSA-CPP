#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter negative number : ";
    cin >> num;
    int n = num;
    int result = 0, i = 0;
    while (num != 0)
    {
        int bit = num & 1;
        result = (bit * pow(10, i)) + result;
        num = num >> 1;
        i++;
    }
    cout << n << endl;
    cout << result;
}