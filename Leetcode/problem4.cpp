// Complement of number

#include <iostream>
using namespace std;

int calculateComplement(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int m = n;
    int mask = 0;
    while (m)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    return ans;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    int complement = calculateComplement(num);
    cout << "Complement: " << complement << endl;

    return 0;
}

// #include <iostream>
// #include <math.h>
// using namespace std;

// int countBits(int n)
// {
//     int result = 0, i = 0;
//     while (n)
//     {
//         int bit = n & 1;
//         if (bit == 1)
//         {
//             bit = 0;
//         }
//         else
//         {
//             bit = 1;
//         }
//         result = (bit * pow(10, i)) + result;
//         n = n >> 1;
//         i++;
//     }
//     int j = 0, decimalNum = 0;
//     while (result)
//     {
//         int bit = result & 1;
//         decimalNum = (bit * pow(2, j)) + decimalNum;

//         result = result >> 1;
//         j++;
//     }
//     return decimalNum;
// }

// int main()
// {
//     int num;
//     cout << "Enter number: ";
//     cin >> num;

//     int numBits = countBits(num);
//     cout << "Number of bits: " << numBits << endl;

//     return 0;
// }
