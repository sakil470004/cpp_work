//date: 2021-04-03
#include <bits/stdc++.h>
#include <vector>

using namespace std;
#define ullint unsigned long long int

int main()
{

    cout << "Enter the number you want to check for the last count ";
    int a;
    cin >> a;
    bool itIsPrime = false;
    int arr[a + 1];
    int index = 0;
    int arrCount = 0;

    for (int i = 2; i <= a; i++)
    {
        itIsPrime = true;
        for (int j = 0; j < arrCount; j++)
        {
            if (i % arr[j] == 0)
            {
                itIsPrime = false;
                break;
            }
        }
        if (itIsPrime==true)
        {
            arr[index] = i;
            index++;
            arrCount++;
        }
    }
    cout << "The number is : " << arrCount;

    return 0;
}