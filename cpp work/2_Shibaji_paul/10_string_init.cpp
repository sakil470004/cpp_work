#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1  ("Robin Williams");

    cout << "Str1: " <<str1 << endl;
    cout << str1.length() << endl;

    string str2 (str1);
    cout << "Str2: " << str2 << endl;
    /*str1 = "Welcome to C++ at Udemy!";
    cout << str1 << endl;
    cout << str1.length() << endl;
    */

    string str3(15, '@');
    cout << "Str3: " << str3 << endl;

    return 0;
}
