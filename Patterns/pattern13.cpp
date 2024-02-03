#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    char ch = 'A';
    int num;
    cout << "Enter number : ";
    cin >> num;
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}