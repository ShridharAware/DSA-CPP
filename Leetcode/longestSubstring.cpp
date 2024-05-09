#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    string res = "";
    sort(strs.begin(), strs.end());

    string first = strs[0], last = strs[strs.size() - 1];
    for (int i = 0; i < min(first.size(), last.size()); i++)
    {
        if (first[i] != last[i])
        {
            return res;
        }
        res += first[i];
    }
    return res;
}
int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    string result = longestCommonPrefix(strs);
    cout << "Longest common substring is = " << result;
}