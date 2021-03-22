//date: 2021-03-20
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

void swap_by_ref(int &n1, int &n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void bubbleSort(int arr[], int size)
{
    int i, j, flag;

    for (int i = 0; i < size - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap_by_ref(arr[j], arr[j + 1]);

                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}

int main()
{
    int arrs[] = {50, 20, 25, 10, 5};

    bubbleSort(arrs, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arrs[i] << " ";
    }

    return 0;
}