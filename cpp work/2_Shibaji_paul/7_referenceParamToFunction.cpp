#include <iostream>

using namespace std;

void fun(int &, int &);


int main()
{
    int x, y;
    x = 20; y = 30;
    cout << "x = " << x << ", y = " << y << endl;
    fun(x, y);
    cout << "x = " << x << ", y = " << y << endl;


    return 0;
}

void fun(int &a, int &b){
    a = a + 5;
    b = b - 10;
    cout<<"after change variable in function by reference"<<endl;

}

