#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    n = abs(n);

    int sum = 0;
    int rem = 0;

    while(n > 0){
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    cout << "Sum of digits: " << sum << endl;

    return 0;
}
