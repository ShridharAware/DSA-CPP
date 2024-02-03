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
        // Print spaces
        int space = num - i;
        while (space)
        {
            cout << "  ";
            space--;
        }
        // Print *
        int j = 1;
        while (j <= i)
        {
            cout << "*"
                 << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}