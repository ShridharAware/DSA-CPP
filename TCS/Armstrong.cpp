#include <iostream>
#include <vector>
using namespace std;

vector<int> checkArmstrong(vector<int> nums)
{
    vector<int> n = nums;
    vector<int> no;
    int arm = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        while (n[i])
        {
            int temp = n[i] % 10;
            arm += temp * temp * temp;
            n[i] /= 10;
        }
        if (arm == nums[i])
        {
            no.push_back(arm);
        }
        arm = 0;
    }
    return no;
}
int main()
{
    // int n;
    // cout << "Enter number : ";
    // cin >> n;
    // cout << endl;
    vector<int> nums = {12, 21, 153, 119, 153};
    vector<int> z = checkArmstrong(nums);
    for (int i : z)
    {
        cout << i << " ,";
    }
}