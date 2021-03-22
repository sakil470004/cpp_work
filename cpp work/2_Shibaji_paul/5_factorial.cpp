#include <iostream>
// write a program to find the factorial of a number.
using namespace std;
// 5! = 5 * 4 * 3 * 2 * 1
// 6! = 6 * 5!
// 0! = 1


int main()
{
    int n;
    long fact = 1;

    cout << "Enter a number: ";
    cin >> n;
    if (n < 0){
        cout << "Unable to find the factorial of a negative number" << endl;
        return 0;
    }

    int i = 1;

    while(i <= n){
        fact = fact * i;
        ++i;
    }
    cout << "Factorial is: " << fact << endl;




    return 0;
}
