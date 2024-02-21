#include <iostream>
using namespace std;
int main()
{
    int num = 2;
    bool val = true;
    int input;
    cout << "Enter any number : ";
    cin >> input;
    int half = input / 2;
    while (num <= half)
    {
        if (input % num == 0)
        {
            val = false;
        }
        num = num + 1;
    }
    if (val == true)
    {
        cout << input << " is a prime number.";
    }
    else
    {
        cout << input << " is not a prime number.";
    }
}