#include <iostream>
using namespace std;
int main()
{
    int count = 1;
    int i = 1;
    int n;
    cout << "Enter number : ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << "  ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}