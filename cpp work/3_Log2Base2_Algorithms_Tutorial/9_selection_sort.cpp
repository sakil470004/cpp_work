//date: 2021-03-22
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

int main()
{
    int arr[] = {180, 145, 155, 170, 156};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}