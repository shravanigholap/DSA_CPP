#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;

// Enqueue
void enqueue(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL)
        front = rear = newNode;
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

// Dequeue
void dequeue()
{
    if (front == NULL)
        cout << "Queue is empty";
    else
    {
        Node *temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
    }
}

// Display
void display()
{
    Node *temp = front;

    if (temp == NULL)
    {
        cout << "Queue is empty";
        return;
    }

    cout << "Queue: ";

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << "After Enqueue:\n";
    display();

    dequeue();

    cout << "\nAfter Dequeue:\n";
    display();

    return 0;
}