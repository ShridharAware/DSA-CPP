#include <iostream>
using namespace std;
int indexFib(int n)
{
    int num = 0, a = 0, b = 1;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    for (int i = 2; i <= n; i++)
    {
        num = a + b;
        a = b;
        b = num;
    }
    return num;
}
int main()
{
    int n;
    cout << "Enter index : ";
    cin >> n;
    cout << "Number at index " << n << " in fibonacci series is " << indexFib(n) << "." << endl;
}