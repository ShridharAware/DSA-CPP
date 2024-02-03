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
        int space = num - i;
        while (space)
        {
            cout << "  ";
            space--;
        }

        int j = 1;
        while (j <= i)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}