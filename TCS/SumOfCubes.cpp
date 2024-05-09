#include <iostream>
using namespace std;

int sumOfCubes(int m, int n)
{
    long long int sum = 0;
    for (int i = m; m <= n; m++)
    {
        sum += m * m * m;
    }
    return sum;
}

int main()
{
    int m = 2, n = 5;
    cout << sumOfCubes(m, n);
}