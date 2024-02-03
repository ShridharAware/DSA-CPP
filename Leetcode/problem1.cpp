// Subtract the product and sum of digits of an integer

#include <iostream>
using namespace std;
int main()
{
    int num, product = 1, sum = 0;
    cout << "Enter number : ";
    cin >> num;
    while (num != 0)
    {
        int rem = num % 10;
        product *= rem;
        sum += rem;
        num = num / 10;
    }

    int result = product - sum;
    cout << "Result is " << result;
}