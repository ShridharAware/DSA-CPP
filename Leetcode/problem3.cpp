// Reverse number

#include <iostream>
using namespace std;
int reverseNum(int);
int main()
{
    int num;
    cout << "Enter number : ";
    cin >> num;
    cout << "Reverse number of " << num << " is " << reverseNum(num) << "." << endl;
}

int reverseNum(int n)
{
    int rev = 0, rem;
    while (n)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}