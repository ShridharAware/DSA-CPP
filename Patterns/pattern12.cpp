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
        char ch = 'A';
        while (j <= num)
        {
            cout << ch << " ";
            ch += 1;
            j++;
        }

        cout << endl;
        i++;
    }
}