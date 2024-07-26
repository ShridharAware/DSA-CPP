#include <iostream>
using namespace std;

class Node
{
public:
    int key;
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        key = 0;
        data = 0;
        prev = NULL;
        next - NULL;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    DoublyLinkedList()
    {
        head = NULL;
    }
    DoublyLinkedList(Node *n)
    {
        head = n;
    }
    Node *checkIfNodeExists(int k)
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
        if (checkIfNodeExists(n->key) != NULL)
        {
            cout << "Node with the key " << n->key << " already exists." << endl;
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
                while (ptr != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                n->prev = ptr;
                cout << "Node appened." << endl;
            }
        }
    }
    void prependNode(Node *n)
    {
        if (checkIfNodeExists(n->key) != NULL)
        {
            cout << "Node with the key " << n->key << " already exists." << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "Node prepended." << endl;
            }
            else
            {
                head->prev = n;
                n->next = head;
                head = n;
                cout << "Node prepended." << endl;
            }
        }
    }
    void insertNodeAfter(int k, Node *n)
    {
        Node *ptr = checkIfNodeExists(k);
        if (ptr == NULL)
        {
            cout << "No node exist with the provided key." << endl;
        }
        else
        {
            if (checkIfNodeExists(n->key) != NULL)
            {
                cout << "Node already exists  with the key " << n->key << " ." << endl;
            }
            else
            {
                Node *nextNode = ptr->next;
                if (nextNode == NULL)
                {
                    ptr->next = n;
                    n->prev = ptr;
                    cout << "Node inserted at the end." << endl;
                }
                else
                {
                    n->next = nextNode;
                    nextNode->prev = n;
                    n->prev = ptr;
                    ptr->next = n;
                    cout << "Code inserted in between." << endl;
                }
            }
        }
    }
    void deleteNodeByKey(int k)
    {
        Node *ptr = checkIfNodeExists(k);
        if (ptr == NULL)
        {
            cout << "No node exists with the key " << k << "." << endl;
        }
        else
        {
            if (head == NULL)
            {
                cout << "Doubly Linked List already empty." << endl;
            }
            else if (head != NULL)
            {
                if (head->key == k)
                {
                    head = head->next;
                    cout << "Node unlinked." << endl;
                }
                else
                {
                    Node *nextNode = ptr->next;
                    Node *prevNode = ptr->prev;
                    if (nextNode == NULL)
                    {
                        prevNode->next = NULL;
                        cout << "Node at deleted at the end." << endl;
                    }
                    else
                    {
                        prevNode->next = nextNode;
                        nextNode->prev = prevNode;
                        cout << "Node deleted succesfully." << endl;
                    }
                }
            }
        }
    }
    void updateNode(int k, int d)
    {
        Node *ptr = checkIfNodeExists(k);
        if (ptr == NULL)
        {
            cout << "Node does not exist." << endl;
        }
        else
        {
            ptr->data = d;
            cout << "Node updated successfully." << endl;
        }
    }
    void printList()
    {
        if (head == NULL)
        {
            cout << "DoublyLinkedList is empty." << endl;
        }
        else
        {
            cout << "DoublyLinkedList values are : ";
            Node *temp = head;
            while (temp != NULL)
            {
                cout << "(" << temp->key << "," << temp->data << ") <--> ";
                temp = temp->next;
            }
        }
    }
};

int main()
{
    DoublyLinkedList obj;
    int option, key1, k1, data1;
    do
    {
        cout << "\nWhat operation do you want to perform? Select option. Enter 0 to exit : " << endl;
        cout << "1. Append node" << endl;
        cout << "2. Prepend node" << endl;
        cout << "3. Insert node after" << endl;
        cout << "4. Delete node by key" << endl;
        cout << "5. Update node by key" << endl;
        cout << "6. Print" << endl;
        cin >> option;
        Node *n1 = new Node();
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Append node operation :\nEnter key and data : " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            obj.appendNode(n1);
            break;
        case 2:
            cout << "Prepend node operation :\nEnter key and data : " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            obj.prependNode(n1);
            break;

        case 3:
            cout << "Insert node operation :\nEnter key : " << endl;
            cin >> k1;
            cout << "Enter key and data of the new node : " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            obj.insertNodeAfter(k1, n1);
            break;
        case 4:
            cout << "Enter key of the node that you want to delete : " << endl;
            cin >> k1;
            obj.deleteNodeByKey(k1);
            break;
        case 5:
            cout << "Update node by key operation - \nEnter key and new data to be updated : " << endl;
            cin >> key1;
            cin >> data1;
            obj.updateNode(key1, data1);
            break;
        case 6:
            obj.printList();
            break;
        default:
            cout << "Enter proper option." << endl;
            break;
        }
    } while (option != 0);
}