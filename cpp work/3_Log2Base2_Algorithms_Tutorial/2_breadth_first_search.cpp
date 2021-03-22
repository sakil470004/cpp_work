//date: 2021-03-19
#include <bits/stdc++.h>

#define V 5
#define size 25

using namespace std;
#define ullint unsigned long long int

int Queue[size];
int front = 0;
int rear = 0;
int isQueueEmpty()
{
    if (front == rear)
        return 1;
    return 0;
}

int dequeue()
{
    if (front == rear)
        return -1;
    else
    {
        int temp = Queue[front];
        front++;
        return temp;
    }
}

void enqueue(int val)
{
    if (rear == size)
        return;
    else
    {
        Queue[rear] = val;
        rear++;
    }
}

void bfs(int arr[V][V], int source)
{
    int isVisited[V] = {0};

    int index;
    enqueue(source);
    isVisited[source] = 1;

    while (!isQueueEmpty())
    {
        int node = dequeue();
        cout << "Visited Node: " << node << endl;

        for (index = 0; index < V; index++)
        {
            if (arr[node][index] == 1 && isVisited[index] == 0)
            {
                enqueue(index);
                isVisited[index] = 1;
            }
        }
    }
}

void bfsCopyBySakil(int arr[V][V], int source)//same menupalation;//same time//same working code 
{
    int isVisitedCopy[V] = {0};

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (arr[i][j] == 1 && isVisitedCopy[i] == 0)
            {
                isVisitedCopy[i] = 1;
            }
        }
    }
}
int main()
{
    int arr[V][V] = {
        {0, 1, 1, 1, 0},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 1, 0},
        {1, 1, 1, 0, 1},
        {0, 1, 0, 1, 0}};

    bfs(arr, 0);

    // bfsCopyBySakil(arr, 0);
    return 0;
}