#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{

    int numerator = factorial(n);
    int denominator = factorial(n - r) * factorial(r);
    int ans = numerator / denominator;
    return ans;
}

int main()
{
    int n, r;
    cout << "Enter value of n : ";
    cin >> n;
    cout << "Enter value of r : ";
    cin >> r;
    int result = nCr(n, r);
    cout << "Result of nCr operation for values n = " << n << " and r = " << r << " is " << result << "." << endl;
}