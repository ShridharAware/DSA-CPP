#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int num;
    int count = 1;
    cout << "Enter number : ";
    cin >> num;
    while (i <= num)
    {
        int j = 1;
        count = i;
        while (j <= i)
        {
            cout << count << " ";
            j++;
            count++;
        }

        cout << endl;
        i++;
    }
}