#include <iostream>
using namespace std;
int main()
{
    int sum = 0, a = 0, b = 1, num;
    cout << "Enter number : ";
    cin >> num;

    cout << a << " " << b << " ";
    for (int i = 0; i < num - 2; i++)
    {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
}