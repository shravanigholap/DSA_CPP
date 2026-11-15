#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

// Create node
Node* createNode(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert node
Node* insert(Node *root, int value)
{
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

// Find height
int height(Node *root)
{
    if (root == NULL)
        return -1;

    int left = height(root->left);
    int right = height(root->right);

    return 1 + max(left, right);
}

// Find depth
int depth(Node *root, int key, int d)
{
    if (root == NULL)
        return -1;

    if (root->data == key)
        return d;

    if (key < root->data)
        return depth(root->left, key, d + 1);
    else
        return depth(root->right, key, d + 1);
}

int main()
{
    Node *root = NULL;
    int n, value, key;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        root = insert(root, value);
    }

    cout << "Height of BST: " << height(root);

    cout << "\nEnter node to find depth: ";
    cin >> key;

    int d = depth(root, key, 0);

    if (d == -1)
        cout << "Node not found";
    else
        cout << "Depth of node: " << d;

    return 0;
}