#include <iostream>
#include <string>
/*
back, front, push_back, pop_back
append, insert

*/
using namespace std;

int main()
{
    string str = "peace is my goal and program is peace";
    str.push_back('.');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;

    str.front() = 'P';
    cout << str << endl;

    str.back() = 'E';
    cout << str << endl;
    str.append(", do you agree?");
    cout << str << endl;

    str.insert(11, "(inserted)");
    cout << str << endl;
    return 0;
}
