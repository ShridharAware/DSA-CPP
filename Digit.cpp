#include <iostream>
#include <stack>
#include <string>
using namespace std;
string decodeString(string &s)
{
    stack<int> counts;
    stack<string> resultStack;
    string result;
    int count = 0;

    for (char c : s)
    {
        if (isdigit(c))
        {
            count = count * 10 + (c - '0');
        }
        else if (c == '[')
        {
            counts.push(count);
            resultStack.push(result);
            count = 0;
            result.clear();
        }
        else if (c == ']')
        {
            int repeatCount = counts.top();
            counts.pop();
            string temp = result;
            for (int i = 1; i < repeatCount; ++i)
            {
                result += temp;
            }
            result = resultStack.top() + result;
            resultStack.pop();
        }
        else
        {
            result += c;
        }
    }
    return result;
}

int main()
{
    string s1 = "3[a]2[bc]";
    cout << "Output 1: " << decodeString(s1) << endl;
    return 0;
}
