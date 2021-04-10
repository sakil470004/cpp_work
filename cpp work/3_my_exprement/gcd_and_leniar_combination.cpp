//date: 2021-04-10
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

int main()
{
    //at my lbl linear combination is not possible
    int a = 7, b = 83;
    bool isGCDfound = false;
    int rem = 0;
    int nextBasok = a;
    int nextBajjo = b;
    int gcd = 0;
    int i = 0;
    do
    {
        if (nextBajjo % nextBasok != 0)
        {
            rem = nextBajjo % nextBasok;
            nextBajjo = nextBasok;
            nextBasok = rem;
        }
        else
        {
            gcd = nextBasok;
            isGCDfound = false;
            break;
        }
        cout <<"loop : "<< i++ << endl;

    } while (!isGCDfound);
    cout << gcd << endl;

    return 0;
}