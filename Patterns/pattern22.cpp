#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int num;
    cout << "Enter number : ";
    cin >> num;
    while (i <= num)
    {
        int j = 1;
        while (j <= num - i + 1)
        {
            cout << j << " ";
            j++;
        }

        int k = 1;
        while (k <= i - 1)
        {
            cout << "* ";
            k++;
        }

        int l = 1;
        while (l <= i - 1)
        {
            cout << "* ";
            l++;
        }

        int m = num - i + 1;
        while (m)
        {
            cout << m << " ";
            m--;
        }

        cout << endl;
        i++;
    }
}