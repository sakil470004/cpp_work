//date: 2021-03-21
#include <bits/stdc++.h>
#define size 25
#define V 5
using namespace std;
#define ullint unsigned long long int

int Stack[size];
int top = -1;

int isStackFull()
{
    if (top == size - 1)
        return 1;
    return 0;
}
void push(int val)
{
    if (isStackFull())
        return;
    else
        Stack[++top] = val;
}
int isStackEmpty()
{
    if (top == -1)
        return 1;
    return 0;
}

int pop()
{
    if (isStackEmpty())
        return -1;
    else
        return Stack[top--];
}

void dfs(int arr[V][V], int source)
{
    int isVisited[V] = {0};
    int index;

    push(source);
    isVisited[source] = 1;
    while (!isStackEmpty())
    {
        int node = pop();
        cout << "Visited Node : " << node<<endl;

        for (index = 0; index < V; index++)
        {
            if (arr[node][index] == 1 && isVisited[index] == 0)
            {
                push(index);
                isVisited[index] = 1;
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

    dfs(arr, 0);

    return 0;
}