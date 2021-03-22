#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    /*
    if (age >= 13 && age <= 19){

    }
    */

    switch(age){

    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19: cout << "The age is teen age " << endl;
            break;
    default: cout << "It is not a teen age" << endl;



    }


    /*
    if (n == 1){
        cout << "One" << endl;
    }
    else if(n == 2){
        cout << "Two" << endl;
    }
    else if (n == 3){
        cout << "Three" << endl;
    }
    else {
        cout << "Invalid number for us" << endl;
    }
    */
    return 0;
}
