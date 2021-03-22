#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    bool flag = true;
    for(i = 2; i <= sqrt(n); ++i){
        if (n % i == 0){
            flag = false;
            break;
        }
    }
    if (flag){
        cout << "given number is a prime number" << endl;
    }
    else{
        cout << "given number is NOT a prime number" << endl;
    }
    //
    return 0;
}
