#include <iostream>
#include <string>


using namespace std;

int main()
{
    string str ("this is what I do like most!");
    string part = str.substr(5, 2);
    cout << part << endl;
    return 0;
}
