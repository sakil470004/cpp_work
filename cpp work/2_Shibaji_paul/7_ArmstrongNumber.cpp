#include <iostream>
#include <cmath>

using namespace std;

int nDigits(int);
bool isArmstrong(int);

int nDigits(int n){
   int count = 0;
   while(n > 0){
    n = n / 10;
    count++;
   }
   return count;

}

bool isArmstrong(int n){

   int count = nDigits(n);

   int sum = 0;
   int temp = n;

    while(n > 0){
        int r = n % 10;
        n = n / 10;
        sum += pow(r, count);//1st perameter number 2nd for power
    }
   return temp==sum;

}


int main()
{
    for(int n = 1; n <= 10000; ++n){
        if (isArmstrong(n)){
            cout << n << " ";
        }
    }
    return 0;
}
