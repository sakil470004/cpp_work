//date: 2021-03-22
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

#define SIZE 5

int LinearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            return 1;
    return 0;
}

int main()
{
    int page_number[SIZE] = {86, 91, 34, 50, 2};
    int key = 50;
    

    cout<<LinearSearch(page_number,SIZE,key);


    return 0;
}