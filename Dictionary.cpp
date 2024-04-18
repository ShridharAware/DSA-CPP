#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> temp;
    temp[1] = "Ashish";
    temp[2] = "Akash";
    temp[3] = "Anish";

    for (const auto &i : temp)
    {
        cout << i.first << " " << i.second << endl;
    }
}