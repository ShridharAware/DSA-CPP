#include <iostream>
#include <vector>
using namespace std;

int sumOfNums(int n)
{
    vector<int> fibs = {0, 1};
    while (fibs.size() < n)
    {
        int last = fibs.size() - 1;
        fibs.push_back(fibs[last - 1] + fibs[last]);
    }

    int sum = 0;
    for (int n : fibs)
    {
        cout << n;
        sum += n;
    }
    return sum;
}

int main()
{
    cout << sumOfNums(10);
}