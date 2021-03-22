#include <iostream>
#include <string>
using namespace std;

int main()
{

    string name;
    cout << "Input your name: ";
    //cin >> name;
    getline(cin, name);

    cout << "What is your school? ";
    string school;
    getline(cin, school);

    cout << "Welcome, " << name << "!" << endl;
    cout << "Your school is: " << school << endl;



    return 0;
}
