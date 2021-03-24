//date: 2021-03-24
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

//Heap Sort;
void HeapSort(int arr[],int size){
    BuildHeap(arr,size);
    while (size>0)
    {
        swap(&arr[0],&arr[size]);
        size--;
        Heapify(arr,0,size);
    }
    
}


void BuildHeap(int arr[], int size)
{
    int i;
    for (i = size / 2; i >= 0; i++)
        Heapify(arr, i, size);
}
void Heapify(int arr[], int index, int size)
{
    int left = 2 * index + 1;
    int right = left + 1;

    int max = index;

    if (left <= size && arr[left] > arr[max])
        max = left;

    if (right <= size && arr[right] > arr[max])
        max = right;

    if (index != max)
    {
        swap(&arr[max], &arr[index]);
        Heapify(arr, max, size)
    }
}

int main()
{
    //Here sample of code implementation is for future;
   //this is like a tree and it work with single swap
   //the root of the tree is biggest arr;
    return 0;
}