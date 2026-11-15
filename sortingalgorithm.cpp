#include <iostream>
using namespace std;

int main()
{
    int a[10], n, i, j, temp;

    cout << "Enter number of prices: ";
    cin >> n;

    cout << "Enter prices: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    // Bubble Sort
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }

    cout << "\nBubble Sort: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    // Selection Sort
    cout << "\nSelection Sort: ";
    for (i = 0; i < n - 1; i++)
    {
        int min = i;

        for (j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    // Insertion Sort
    cout << "\nInsertion Sort: ";
    for (i = 1; i < n; i++)
    {
        int key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}