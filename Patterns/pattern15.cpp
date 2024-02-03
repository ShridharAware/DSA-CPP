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
        while (j <= i)
        {
            char ch = 'A' + i + j - 2;

            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}