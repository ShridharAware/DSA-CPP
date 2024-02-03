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
        int j = 1;
        while (j <= num - i + 1)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}