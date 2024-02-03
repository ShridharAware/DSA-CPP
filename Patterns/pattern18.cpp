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
        int space = i - 1;
        while (space)
        {
            cout << "  ";
            space--;
        }

        int j = i;
        while (j <= num)
        {
            cout << "*"
                 << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}