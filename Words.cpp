#include <iostream>
#include <vector>
using namespace std;

void addABC(string str)
{
    string word = "";
    string final = "";
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != '.')
        {
            word += str[i];
        }
        else
        {
            if (count % 2 == 0)
            {
                final += word + '.';
                word = "";
            }
            else
            {
                final += "abc.";
                word = "";
            }
            count++;
        }
    }
    if (count % 2 == 0)
    {
        final += word + '.';
        word = "";
    }
    else
    {
        final += "abc.";
        word = "";
    }

    cout << final;
}
int main()
{
    string str = "i.like.this.game";
    addABC(str);
}