#include <iostream>
using namespace std;

int stack[5], top = -1;

void push()
{
    int x;
    if (top == 4)
        cout << "Stack is Full";
    else
    {
        cout << "Enter element: ";
        cin >> x;
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
        cout << "Stack is Empty";
    else
    {
        cout << "Deleted element: " << stack[top];
        top--;
    }
}

void display()
{
    if (top == -1)
        cout << "Stack is Empty";
    else
    {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            cout << "Exit";
            break;

        default:
            cout << "Invalid choice";
        }

    } while (choice != 4);

    return 0;
}