#include <iostream>
#include <regex>

using namespace std;

bool validateString(string s)
{
    bool upperCase = false, number = false, lower = false, specialChar = false, length = false;
    if (s.size() > 8)
    {
        length = true;
        regex pattern("[a - z]");
        for (auto i : s)
        {
            if (regex_match(string(1, i), pattern))
            {
                lower = true;
            }
        }
    }
}

int main()
{
    string s = "abcd";
    bool a = validateString(s);
}