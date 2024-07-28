#include <iostream>
#include <math.h>
using namespace std;
int calculate(int val, int i)
{
    return val * pow(16, i);
}
int main()
{
    string num = "2A5D";
    int res = 0, i = num.size() - 1;
    int j = 0;
    while (i >= 0)
    {
        int choice = num[i];
        switch (choice)
        {
        case '0':
            res = res + calculate(0, j);
            break;
        case '1':
            res = res + calculate(1, j);
            break;
        case '2':
            res = res + calculate(2, j);
            break;
        case '3':
            res = res + calculate(3, j);
            break;
        case '4':
            res = res + calculate(4, j);
            break;
        case '5':
            res = res + calculate(5, j);
            break;
        case '6':
            res = res + calculate(6, j);
            break;
        case '7':
            res = res + calculate(7, j);
            break;
        case '8':
            res = res + calculate(8, j);
            break;
        case '9':
            res = res + calculate(9, j);
            break;
        case 'A':
            res = res + calculate(10, j);
            break;
        case 'B':
            res = res + calculate(11, j);
            break;
        case 'C':
            res = res + calculate(12, j);

            break;
        case 'D':
            res = res + calculate(13, j);

            break;
        case 'E':
            res = res + calculate(14, j);

            break;
        case 'F':
            res = res + calculate(15, j);

            break;

        default:
            break;
        }
        i--;
        j++;
    }
    cout << res;
}