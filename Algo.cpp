#include <iostream>
using namespace std;

int minValue(string str)
{
    int n = str.size(), i = 0;
    int result = 0;
    string prefix = "";
    string suffix = "";
    while (n > 0)
    {

        if (str[i] == str[i + 1])
        {
            prefix = str[i];
        }
    }

    return result;
}

int main()
{
    string str = "aabccabba";
    cout << minValue(str);
}