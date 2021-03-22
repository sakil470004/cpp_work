#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    int a {10};
    int b {10};
    int r;

    bool p = a != b;//i can use it instead of if
    cout << "p = " << p << endl;
    //cout << "Type id: " << typeid(10>20).name() << endl;

    return 0;
}
