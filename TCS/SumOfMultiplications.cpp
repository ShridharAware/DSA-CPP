#include <iostream>
using namespace std;

void sumOfMulti(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        int mul = i * num;
        sum += mul;
    }
    cout << sum;
}
int main()
{
    cout << "Enter number : ";
    int num;
    cin >> num;
    sumOfMulti(num);
}