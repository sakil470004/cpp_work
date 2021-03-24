//date: 2021-03-23
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

int main()
{
    int arraySize = 5;
    // int arr[] = {-1, -1, -1, -1, -1};//default
    int arr[] = {3, -1, -1, 5, 2}; //data are inserted

    int data = 10, data2; //input 10 into array without avoiding collision//using quadratic probing;
    data2 = data;
    for (int i = 0; i < 5; i++)
    {
        int index = (data + (i * i)) % arraySize;
        if (arr[index] == -1)
        {
            arr[index] = data2;
            cout << "insert successfully " << data2 << endl;

            break;
        }
    }

    data = 24; //inseting new;
    data2 = data;
    for (int i = 0; i < 5; i++)
    {
        int index = (data + (i * i)) % arraySize;
        if (arr[index] == -1)
        {
            arr[index] = data2;
            cout << "insert successfully " << data2 << endl;
            break;
        }
       
    }
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}