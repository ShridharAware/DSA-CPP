#include <iostream>
using namespace std;
bool exists(string s, string t)
{
    string a;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < t.size(); j++)
        {
            if (s[i] == t[j])
            {
                a.push_back(s[i]);
            }
        }
    }

    if (s == a)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s = "abc";
    string t = "abcd";
    cout << exists(s, t);
}