#include <iostream>
using namespace std;

string binaryToString(string s)
{
    string res = "";
    for (int i = 0; i < s.size(); i += 2)
    {
        string sbst = s.substr(i, 2);
        if (sbst == "00")
        {
            res += "A";
        }
        else if (sbst == "01")
        {
            res += "B";
        }
        else if (sbst == "10")
        {
            res += "C";
        }
        else if (sbst == "11")
        {
            res += "D";
        }
        else
        {
            return "Incorrect format";
        }
    }

    return res;
}

int main()
{
    string s = "0001101111";
    cout << binaryToString(s);
}