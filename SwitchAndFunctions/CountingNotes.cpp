#include <iostream>
using namespace std;
int main()
{
    int amount, hundreds = 0, fifties = 0, twenties = 0, tens = 0, ones = 0, point;
    cout << "Enter amount to count notes of 100, 50, 20, 10 and 1 : ";
    cin >> amount;
    if (amount > 100)
    {
        point = 1;
    }
    else if (amount > 50)
    {
        point = 2;
    }
    else if (amount > 20)
    {
        point = 3;
    }
    else if (amount > 10)
    {
        point = 4;
    }
    else
    {
        point = 5;
    }
    switch (point)
    {
    case 1:
        hundreds = amount / 100;
        amount = amount - hundreds * 100;
        fifties = amount / 50;
        amount = amount - fifties * 50;
        twenties = amount / 20;
        amount = amount - twenties * 20;
        tens = amount / 10;
        amount = amount - tens * 10;
        ones = amount / 1;

        break;
    case 2:
        fifties = amount / 50;
        amount = amount - fifties * 50;
        twenties = amount / 20;
        amount = amount - twenties * twenties;
        tens = amount / 10;
        amount = amount - tens * 10;
        ones = amount / 1;

        break;
    case 3:
        twenties = amount / 20;
        amount = amount - twenties * 20;
        tens = amount / 10;
        amount = amount - tens * 10;
        ones = amount / 1;

        break;
    case 4:
        tens = amount / 10;
        amount = amount - tens * 10;
        ones = amount / 1;

        break;
    case 5:
        ones = amount / 1;
        break;

    default:
        cout << "Enter amount greater then 1";
        break;
    }
    cout << "100s notes = " << hundreds << endl;
    cout << "50s notes = " << fifties << endl;
    cout << "20s notes = " << twenties << endl;
    cout << "10s notes = " << tens << endl;
    cout << "1s notes = " << ones << endl;
}