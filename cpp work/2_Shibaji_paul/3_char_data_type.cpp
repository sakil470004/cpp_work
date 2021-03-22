#include <iostream>

using namespace std;

int main()
{
    char ch = 'a';
    cout << ch << " = " << (int)ch << endl;
    ch = ch - 32;
    cout << ch << endl;

    /*
        'A' = 65
        'B' = 66
        'C' = 67


        'a' = 97
        'b' = 98


    */
    return 0;
}
