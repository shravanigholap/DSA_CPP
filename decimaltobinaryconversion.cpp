#include <iostream>
using namespace std;

int main()
{
    int n, stack[20], top = -1;

    cout << "Enter decimal number: ";
    cin >> n;

    // Store remainders in stack
    while (n > 0)
    {
        stack[++top] = n % 2;
        n = n / 2;
    }

    // Display binary
    cout << "Binary number: ";

    while (top >= 0)
    {
        cout << stack[top--];
    }

    return 0;
}