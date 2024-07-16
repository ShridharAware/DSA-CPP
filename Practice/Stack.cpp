#include <iostream>
#include <vector>
using namespace std;

class Stack
{
private:
    int top;
    int stack[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            stack[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        return false;
    }
    bool isFull()
    {
        if (top == 4)
            return true;
        return false;
    }
    void push(int num)
    {
        if (isFull())
        {
            cout << "Stack overflowed." << endl;
            return;
        }
        stack[++top] = num;
        cout << num << " pushed in the stack." << endl;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflowed." << endl;
            return;
        }
        cout << stack[top] << " popped from the stack." << endl;
        top--;
    }
    void peek(int index)
    {
        if (isEmpty())
        {
            cout << "Stack underflowed." << endl;
            return;
        }
        if (index <= top)
        {
            cout << stack[index] << " is at index " << index << endl;
        }
        else
        {
            cout << "Index must be in the range of 0 to " << top << endl;
        }
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack underflowed." << endl;
            return;
        }
        for (int i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int choice = -1;
    Stack s1;
    while (choice != 0)
    {
        cout << "1. Print stack" << endl;
        cout << "2. Push element in the stack" << endl;
        cout << "3. Pop element from the stack" << endl;
        cout << "4. Peek in the stack" << endl;
        cout << "Enter your choice or enter 0 to exit : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            s1.display();
            break;
        case 2:
            int num;
            cout << "Enter element to push into the stack : ";
            cin >> num;
            s1.push(num);
            break;
        case 3:
            s1.pop();
            break;
        case 4:
            int index;
            cout << "Enter index where you want to peek : ";
            cin >> index;
            s1.peek(index);
            break;
        default:
            cout << "Select proper option";
            break;
        }
    }
}