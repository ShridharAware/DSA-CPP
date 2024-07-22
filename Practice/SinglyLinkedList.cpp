#include <iostream>
using namespace std;

class Node
{
public:
    int key;
    int data;
    Node *next;
    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
    }
};

class SinglyLinkedList
{
public:
    Node *head;
    SinglyLinkedList()
    {
        head = NULL;
    }
    SinglyLinkedList(Node *n)
    {
        head = n;
    }
    Node *nodeExists(int k)
    {
        Node *temp = NULL;
        Node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->key == k)
            {
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp;
    }
    void appendNode(Node *n)
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << "Node at " << n->key << " already exists. Append another node with different key." << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "Node appended." << endl;
            }
            else
            {
                Node *ptr = head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                cout << "Node appended." << endl;
            }
        }
    }
    void prependNode(Node *n)
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << "Node at " << n->key << " already exists. Append another node with different key." << endl;
        }
        else
        {
            n->next = head;
            head = n;
            cout << "Node prepended." << endl;
        }
    }
    void insertNodeAfter(int key, Node *n)
    {
        Node *ptr = nodeExists(key);
        if (ptr == NULL)
        {
            cout << "Node does not exists." << endl;
        }
        else
        {
            if (nodeExists(n->key) != NULL)
            {
                cout << "Node at " << n->key << " already exists. Append another node with different key." << endl;
            }
            else
            {
                n->next = ptr->next;
                ptr->next = n;
                cout << "Node inserted." << endl;
            }
        }
    }

    void deleteNodeByKey(int key)
    {
        if (head == NULL)
        {
            cout << "Singly linked list is empty." << endl;
        }
        else if (head != NULL)
        {
            if (head->key == key)
            {
                head = head->next;
                cout << "Node unlinked successfully." << endl;
            }
            else
            {
                Node *tempPtr = NULL;
                Node *prevPtr = head;
                Node *currentPtr = head->next;
                while (currentPtr != NULL)
                {
                    if (currentPtr->key == key)
                    {
                        tempPtr = currentPtr;
                        currentPtr = NULL;
                    }
                    else
                    {
                        prevPtr = prevPtr->next;
                        currentPtr = currentPtr->next;
                    }
                }
                if (tempPtr != NULL)
                {
                    prevPtr->next = tempPtr->next;
                    cout << "Node unlinked successfully." << endl;
                }
                else
                {
                    cout << "Node does not exist with the key value " << key << "." << endl;
                }
            }
        }
    }
    void updateNodeByKey(int key, int data)
    {
        Node *ptr = nodeExists(key);
        if (ptr != NULL)
        {
            ptr->data = data;
            cout << "Node data updated successfully." << endl;
        }
        else
        {
            cout << "Node does not exists with the " << key << "." << endl;
        }
    }
    void diplayLinkedList()
    {
        if (head == NULL)
        {
            cout << "Singly linked list is empty." << endl;
        }
        else
        {
            cout << "Values in singly linked list are : ";
            Node *temp = head;
            while (temp != NULL)
            {
                cout << "(" << temp->key << ", " << temp->data << ")" << " --> ";
                temp = temp->next;
            }
        }
        cout << endl;
    }
};

int main()
{
    SinglyLinkedList s;
    int choice, key, data;
    do
    {
        cout << "1. Display the Singly Linked List." << endl;
        cout << "2. Append node." << endl;
        cout << "3. Prepend node." << endl;
        cout << "4. Insert node after key." << endl;
        cout << "5. Update node using key." << endl;
        cout << "6. Delete node using key." << endl;
        cout << "Enter 0 to exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        Node *n = new Node();
        switch (choice)
        {
        case 0:
            break;
        case 1:
            s.diplayLinkedList();
            break;
        case 2:
            cout << "Enter key and data to append node in singly linked list : ";

            cin >> key;
            cin >> data;
            n->key = key;
            n->data = data;
            s.appendNode(n);
            break;
        case 3:
            cout << "Enter key and data to prepend node in singly linked list : ";
            cin >> key;
            cin >> data;
            n->key = key;
            n->data = data;
            s.prependNode(n);
            break;
        case 4:
            cout << "Enter key and data to insert node after key in singly linked list : ";
            cin >> key;
            cin >> data;
            cout << "Enter key : ";
            int k;
            cin >> k;
            n->key = key;
            n->data = data;
            s.insertNodeAfter(k, n);
            break;
        case 5:
            cout << "Enter key and data to update node in singly linked list : ";
            cin >> key;
            cin >> data;
            s.updateNodeByKey(key, data);
            break;
        case 6:
            cout << "Enter key to delete node in singly linked list : ";
            cin >> key;
            s.deleteNodeByKey(key);
            break;

        default:
            cout << "Wrong choice. Enter choice from the statements" << endl;
            break;
        }
    } while (choice != 0);
}