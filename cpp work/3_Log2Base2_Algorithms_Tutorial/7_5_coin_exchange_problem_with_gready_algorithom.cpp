//date: 2021-03-22
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

int findMinCoins(int coins[], int size, int value)
{
    int ans[100];

    int i, count = 0;
    for (i = 0; i < size; i++)
    {
        while (value >= coins[i])
        {
            value -= coins[i];
            ans[count] = coins[i];//just store ans
            count++;
        }
        if (value == 0)
            break;
    }
    return count;
}
int main()
{
    int arr[] = {25, 20, 10, 5};
    int size = 4;
    int value = 105;
    cout << findMinCoins(arr, size, value);

    return 0;
}