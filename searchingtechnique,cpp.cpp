#include <iostream>
using namespace std;

int main()
{
    int a[10], n, key, i;
    int found = 0;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter roll numbers in sorted order: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter roll number to search: ";
    cin >> key;

    // Linear Search
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            found = 1;
            break;
        }
    }

    if (found)
        cout << "\nLinear Search: Roll number found";
    else
        cout << "\nLinear Search: Roll number not found";

    // Binary Search
    int low = 0, high = n - 1;
    found = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == key)
        {
            found = 1;
            break;
        }
        else if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (found)
        cout << "\nBinary Search: Roll number found";
    else
        cout << "\nBinary Search: Roll number not found";

    return 0;
}
