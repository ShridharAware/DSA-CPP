#include <iostream>
using namespace std;
int main()
{
    int sum = 0, num;
    cout << "Enter number : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    cout << "Addition of all numbers from 1 to " << num << " is " << sum << ".";
}