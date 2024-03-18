#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int start = 0, end = v.size() - 1;
    while (start <= end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(2);
    v.push_back(10);
    v.push_back(4);
    vector<int> ans = reverse(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}