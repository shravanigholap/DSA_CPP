#include <iostream>
using namespace std;

int a[10][10], n, visited[10];

void BFS(int start)
{
    int q[10], front = 0, rear = 0;

    visited[start] = 1;
    q[rear++] = start;

    cout << "BFS: ";

    while (front < rear)
    {
        int v = q[front++];
        cout << v << " ";

        for (int i = 0; i < n; i++)
        {
            if (a[v][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                q[rear++] = i;
            }
        }
    }
}

void DFS(int v)
{
    cout << v << " ";
    visited[v] = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[v][i] == 1 && visited[i] == 0)
            DFS(i);
    }
}

int main()
{
    int start;

    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Enter starting vertex: ";
    cin >> start;

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    BFS(start);

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    cout << "\nDFS: ";
    DFS(start);

    return 0;
}