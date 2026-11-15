#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
    float average;
};

int main()
{
    Student s[10];
    int n, searchRoll;

    cout << "Enter number of students: ";
    cin >> n;

    // Input
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Roll Number: ";
        cin >> s[i].roll;

        cout << "Enter Name: ";
        cin >> s[i].name;

        cout << "Enter Marks: ";
        cin >> s[i].marks;

        cout << "Enter Average: ";
        cin >> s[i].average;
    }

    // Display
    cout << "\nStudent Records:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nRoll Number: " << s[i].roll;
        cout << "\nName: " << s[i].name;
        cout << "\nMarks: " << s[i].marks;
        cout << "\nAverage: " << s[i].average;
    }

    // Search
    cout << "\n\nEnter Roll Number to search: ";
    cin >> searchRoll;

    for (int i = 0; i < n; i++)
    {
        if (s[i].roll == searchRoll)
        {
            cout << "\nStudent Found!";
            cout << "\nName: " << s[i].name;
            cout << "\nMarks: " << s[i].marks;
            cout << "\nAverage: " << s[i].average;
            return 0;
        }
    }

    cout << "\nStudent not found.";

    return 0;
}