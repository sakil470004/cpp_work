#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int);

bool isPrime(int n){
   for(int i = 2; i <= sqrt(n); ++i){
        if(n % i == 0){
            return false;
        }
   }
   return true;

}

int main()
{
    int n;
    for(n = 10; n <= 1000; ++n){
        if (isPrime(n)){
            cout << "Prime Number: " << n << endl;
        }
    }
    return 0;
}
