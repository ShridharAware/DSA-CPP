#include <iostream>
using namespace std;
int ap(int n)
{

    return 3 * n + 7;
}
int main()
{
    int num;
    cout << "AP is 3*n+7. Enter value of n : ";
    cin >> num;
    cout << "Answer of given AP when value of n = " << num << " is " << ap(num) << "." << endl;
}