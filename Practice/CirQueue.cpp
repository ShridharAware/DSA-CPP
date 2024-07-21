#include <iostream>
using namespace std;

class CirQueue
{
private:
    int front, rear;
    int arr[5];

public:
    CirQueue()
    {
        front = rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1)
            return true;
        return false;
    }
    bool isFull()
    {
        if ((rear + 1) % 5 == front)
            return true;
        return false;
    }

    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue overflowed." << endl;
            return;
        }
        else if (isEmpty())
        {
            front = rear = 0;
            arr[rear] = val;
            cout << val << " is enqueued in the queue." << endl;
            return;
        }
        else
        {
            rear = (rear + 1) % 5;
            arr[rear] = val;
            cout << val << " is enqueued in the queue." << endl;
            return;
        }
    }
    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue underflowed." << endl;
            return 0;
        }
        else if (rear == front)
        {
            int x = arr[front];
            arr[front] = 0;
            front = (front + 1) % 5;
            return x;
        }
        else
        {
            int x = arr[front];
            arr[front] = 0;
            front = (front + 1) % 5;
            return x;
        }
    }
};

int main()
{
    CirQueue que;
    int choice;
    do
    {
        cout << "1. Display the queue." << endl;
        cout << "2. Enqueue." << endl;
        cout << "3. Dequeue." << endl;
        cout << "Enter 0 to exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            break;
        case 1:
            que.display();
            break;
        case 2:
            cout << "Enter element to enter into queue : ";
            int num;
            cin >> num;
            que.enqueue(num);
            break;
        case 3:
            cout << que.dequeue() << " is removed from queue." << endl;
            break;
        default:
            cout << "Wrong choice. Enter choice from the statements" << endl;
            break;
        }
    } while (choice != 0);
}