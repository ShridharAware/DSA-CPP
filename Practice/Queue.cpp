#include <iostream>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int arr[5];

public:
    Queue()
    {
        front = -1;
        rear = -1;
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
        if (rear == 4)
            return true;
        return false;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }
        else
        {
            for (int i = 0; i < 5; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is full." << endl;
            return;
        }
        else if (isEmpty())
        {
            front++;
            rear++;
            arr[rear] = val;
            return;
        }
        else
        {
            rear++;
            arr[rear] = val;
            return;
        }
    }
    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return 0;
        }
        else if (front == rear)
        {
            int x = arr[front];
            arr[front] = 0;
            front = -1;
            rear = -1;
            return x;
        }
        else
        {
            int x = arr[front];
            arr[front] = 0;
            front++;
            return x;
        }
    }
};

int main()
{
    Queue que;
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
            cout << que.dequeue() << " is removed from queue.";
            break;
        default:
            cout << "Wrong choice. Enter choice from the statements" << endl;
            break;
        }
    } while (choice != 0);
}