//date: 2021-03-22
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

int main()
{
    int arr[] = {40, 10, 50, 30, 20};

    for (int i = 1; i < 5; i++)
    {
        int value = arr[i];
        int index = i;
        while (index > 0 && arr[index - 1] > value)
        {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = value;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}