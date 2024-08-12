#include <iostream>
#define SPACE 10

using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        val = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int v)
    {
        val = v;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    TreeNode *root;
    BST()
    {
        root = NULL;
    }

    bool isEmpty()
    {
        if (root == NULL)
            return true;
        return false;
    }

    void insertNode(TreeNode *new_node)
    {
        if (root == NULL)
        {
            root = new_node;
            cout << "Value inserted as root node." << endl;
        }
        else
        {
            TreeNode *temp = root;
            while (temp != NULL)
            {
                if (new_node->val == temp->val)
                {
                    cout << "Value already exits. Insert another value." << endl;
                    return;
                }
                else if ((new_node->val < temp->val) && (temp->left == NULL))
                {
                    temp->left = new_node;
                    cout << "Value inserted at left!" << endl;
                    break;
                }
                else if (new_node->val < temp->val)
                {
                    temp = temp->left;
                }
                else if ((new_node->val > temp->val) && (temp->right == NULL))
                {
                    temp->right = new_node;
                    cout << "Value inserted at right!" << endl;
                    break;
                }
                else if (new_node->val > temp->val)
                {
                    temp = temp->right;
                }
            }
        }
    }

    TreeNode *searchNode(int value)
    {
        if (root == NULL)
        {
            cout << "BST is empty." << endl;
            return NULL;
        }
        TreeNode *temp = root;
        while (temp != NULL)
        {
            if (temp->val == value)
            {
                return temp;
            }
            else if (temp->val > value)
            {
                temp = temp->left;
            }
            else
            {
                temp = temp->right;
            }
        }
        return NULL;
    }

    void print2D(TreeNode *r, int space)
    {
        if (r == NULL)
            return;
        space += SPACE;
        print2D(r->right, space);
        cout << endl;
        for (int i = SPACE; i < space; i++)
            cout << " ";
        cout << r->val << "\n";
        print2D(r->left, space);
    }

    void preOrder(TreeNode *r)
    {
        if (r == NULL)
            return;
        cout << r->val << " ";
        preOrder(r->left);
        preOrder(r->right);
    }
    void inOrder(TreeNode *r)
    {
        if (r == NULL)
            return;
        inOrder(r->left);
        cout << r->val << " ";
        inOrder(r->right);
    }
    void postOrder(TreeNode *r)
    {
        if (r == NULL)
            return;

        postOrder(r->left);
        postOrder(r->right);
        cout << r->val << " ";
    }
    int getHeight(TreeNode *r)
    {
        if (r == NULL)
        {
            return -1;
        }
        else
        {
            int lHeight = getHeight(r->left);
            int rHeight = getHeight(r->right);
            return lHeight > rHeight ? lHeight + 1 : rHeight + 1;
        }
        return 0;
    }
};

int main()
{
    BST obj;
    int option, value;
    do
    {
        cout << "What operation do you want to perform ? Select an option number or Enter 0 to exit : " << endl;
        cout << "1. Insert Node" << endl;
        cout << "2. Search Node" << endl;
        cout << "3. Delete Node" << endl;
        cout << "4. Print BST values" << endl;
        cout << "5. Print height of the Tree" << endl;

        cin >> option;

        TreeNode *new_node = new TreeNode();
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enter the value to insert into the BST : ";
            cin >> value;
            new_node->val = value;
            obj.insertNode(new_node);
            cout << endl;
            break;
        case 2:
            cout << "Enter the value to search into BST : ";
            cin >> value;
            new_node = obj.searchNode(value);
            if (new_node != NULL)
            {
                cout << "Value is present in BST." << endl;
            }
            else
            {
                cout << "Value is not present in BST." << endl;
            }
            break;
        case 3:
            break;
        case 4:
            obj.print2D(obj.root, 5);
            // obj.preOrder(obj.root);
            // cout << endl;
            // obj.inOrder(obj.root);
            // cout << endl;
            // obj.postOrder(obj.root);
            // cout << endl;
            break;
        case 5:
            cout << "Height of the BST : " << obj.getHeight(obj.root) << endl;
            break;
        default:
            cout << "Select correct option." << endl;
            break;
        }
    } while (option != 0);
}