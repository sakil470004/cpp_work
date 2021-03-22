//date: 2021-03-18
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

int BinarySearchDevide_and_conqure(int arr[], int start, int end, int key)
{ //it work with recurtion+
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == key)
            return 1;

        if (arr[mid] < key)
            return BinarySearchDevide_and_conqure(arr, mid + 1, end, key);
        else
            return BinarySearchDevide_and_conqure(arr, start, mid - 1, key);
    }
    return 0;
}

//think about book example
int BinarySearch(int arr[], int start, int end, int key)
{
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == key)
            return 1; //found the key; in here;

        if (arr[mid] < key)  //key is not found here;
            start = mid + 1; //if key is big to mid change the start;
        else
            end = mid - 1; //if key is small than mid change the end;
    }
    return 0;
}

int main()
{
    int arrTest[] = {1, 3, 6, 32, 43, 54, 76, 87, 90};

    // this is only work for the sorted array

    if (BinarySearch(arrTest, 0, 8, 87)) //check the function work or not
        cout << "It found" << endl;
    else
        cout << "It did not found" << endl;

    // int mid;
    // int start = 0, end = 8, key = 76;
    // while (start <= end)
    // {
    //     mid = (start + end) / 2;

    //     if (arrTest[mid] == key)
    //         return 1;

    //     if (arrTest[mid] < key)
    //         start = mid + 1;

    //     else
    //         end =mid-1;
    // }

    return 0;
}