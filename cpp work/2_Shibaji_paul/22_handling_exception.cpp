//date: 2021-03-21
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

int main()
{
    int n;
    cout << "Input number of elements : ";
    cin >> n;
    int *p;
    try
    {
        p = new int[n];
        cout<<"It going to ok"<<endl;
    }
    catch (std::bad_array_new_length ex)
    {
        cout << ex.what() << endl;
    }

    cout << "Hello  "<<n << endl;

    delete[] p;

    return 0;
}