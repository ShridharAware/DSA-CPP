#include <iostream>
using namespace std;
void fibonacci(int n)
{
    int a = 0, b = 1;
    cout << "Fibonacci series --> 0, 1, ";
    while (b <= n)
    {
        int sum = a + b;
        if (sum <= n)
        {
            cout << sum << ", ";
        }
        a = b;
        b = sum;
    }
}

int main()
{
    int n;
    cout << "Enter limit to print fibonacci series : ";
    cin >> n;
    fibonacci(n);
}