#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number : ";
    cin >> num;
    bool isPrime = 1;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        cout << num << " is a prime number.";
    }
    else
    {
        cout << num << " is not a prime number.";
    }
}