#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL;
    Node *newNode;

    // Insert at beginning
    newNode = new Node();

    cout << "Enter data: ";
    cin >> newNode->data;

    newNode->next = head;
    head = newNode;

    // Display
    cout << "Linked List: ";

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}