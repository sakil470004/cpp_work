#include <iostream>

using namespace std;
// program to print table of a given number

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i;
    for(i = 1; i <= 10; ++i){
        cout << n << " X " << i << " = " << n * i << endl;
    }

    return 0;
}
