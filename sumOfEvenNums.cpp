#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int input;
    int num = 1;
    cout << "Enter number : ";
    cin >> input;
    while (num < input)
    {
        if (num % 2 == 0)
        {
            sum = sum + num;
        }
        num++;
    }
    cout << "Sum of all even numbers from 0 to " << input << " is " << sum << ".";
}