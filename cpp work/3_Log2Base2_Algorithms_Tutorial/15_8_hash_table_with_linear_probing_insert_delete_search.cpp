//date: 2021-03-24
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int
#define size 5

int arr[size];

void init()
{
    int i;
    for (i = 0; i < size; i++)
        arr[i] = -1;
}
int insert(int value)
{
    int key = value % size;
    int index = key;
    while (arr[index] != -1)
    {
        index = (index + 1) % size; //index increment;
        if (index == key)
        {
            cout << "Hash Table is full";
            return;
        }
    }
    arr[index] = value;
    return 1;
}

int search(int value)
{
    int key = value % size;
    int index = key;

    while (arr[index] != value)
    {
        index = (index + 1) % size; //idext increment;
        if (index == key)
            return 0;
    }
    return index; //search was found and return the index;
}

int del(int value)
{
    int key = value % size;
    int index = key;
    while (arr[index] != value)
    {
        index = (index + 1) % size;
        if (index == key)
            return 0;//value  is not here
    }
    arr[index] = -1;
    return 1;
}

//it make by me
int delValue(int value)
{
    int index = search(value);
    if (index != 0)
    {
        arr[index] = -1; //delete the value;
        return 1;
    }
    else
    {
        cout << "value " << value << "is not here in the hash";
        return 0;//value is not here
    }
}
int main()
{

    return 0;
}