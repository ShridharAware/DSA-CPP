#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 1, 2, 3, 3, 3};
    int size = nums.size();
    map<int, int> res;
    vector<int> result;

    for (int i : nums)
    {
        res[i]++;
    }

    for (auto pair : res)
    {
        // if (size > 0)
        //     result.push_back(size);
        // size -= pair.second;
        cout << pair.first << "   " << pair.second << endl;
    }
    // for (int i : result)
    // {
    //     cout << i << "  " << endl;
    // }
}