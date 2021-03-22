#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i, count;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factors are: 1 ";
    for(i = 2, count = 2; i <= sqrt(n); ++i){
        if (n % i == 0){
            cout << i << " ";
            count ++;
            if (i != n/i){//for cross check for second for example 100
                cout << n/i << " ";
                count ++;
            }

        }

    }
    cout << n << endl;
    cout << "Total number of factors found is " << count << endl;
    if (count == 2){
        cout << "The given number is a prime number" << endl;
    }
    else{
        cout << "The given number is not a prime number " << endl;
    }
    return 0;
}
