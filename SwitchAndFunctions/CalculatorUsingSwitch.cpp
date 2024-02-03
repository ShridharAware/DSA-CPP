#include <iostream>
using namespace std;
int main()
{
    int num1, num2, result;
    char op;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    cout << "Operation to perform (+, -, *, /): ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Addition of numbers is : " << (num1 + num2) << endl;
        break;

    case '-':
        cout << "Subtraction of numbers is : " << (num1 - num2) << endl;
        break;

    case '*':
        cout << "Multiplication of numbers is :" << (num1 * num2) << endl;
        break;

    case '/':
        cout << "Division of numbers is : " << (num1 / num2) << endl;
        break;

    default:
        "Enter correct operator :";
        break;
    }
}