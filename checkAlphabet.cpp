#include <iostream>
using namespace std;
int main()
{
    char input;
    cout << "Insert any key : ";
    cin >> input;

    if (input >= 'a' && input <= 'z')
    {
        cout << "Input is between 'a' and 'z'.";
    }
    else if (input >= 'A' && input <= 'Z')
    {
        cout << "Input is between 'A' and 'Z'.";
    }
    else
    {
        cout << "Input is symbol.";
    }
}