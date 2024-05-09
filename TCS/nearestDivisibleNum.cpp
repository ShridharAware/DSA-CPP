#include <iostream>
using namespace std;

int findNearestNum(int x, int y)
{
    if (x % y == 0)
    {
        return x;
    }
    for (int i = 1; i < 100; i++)
    {
        int greaterNum = x + i;
        int smallerNum = x - i;
        if (greaterNum % y == 0)
        {
            return greaterNum;
        }
        else if (smallerNum % y == 0)
        {
            return smallerNum;
        }
    }
    return 0;
}
int main()
{
    int res = findNearestNum(13, 3);
    cout << res;
}