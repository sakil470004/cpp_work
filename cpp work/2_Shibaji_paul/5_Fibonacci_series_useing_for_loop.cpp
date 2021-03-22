#include <iostream>

using namespace std;

int main()
{
    int t1, t2, sum, n, i;
    cout << "Enter how many terms: ";
    cin >> n;

    for(t1 = -1, t2 = 1, i = 1; i <= n; ++i){
        sum = t1 + t2;
        cout << sum << " ";
        t1 = t2;
        t2 = sum;
    }




    return 0;
}
