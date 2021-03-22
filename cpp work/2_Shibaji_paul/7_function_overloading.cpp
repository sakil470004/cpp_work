#include <iostream>

using namespace std;

int sum(int, int);
double sum(double, double);

int sum(int a, int b){
    cout << "Integer sum" << endl;
    return a + b;
}
double sum(double a, double b){
    cout << "Double sum" << endl;
    return a + b;
}
int sum(int a, int b, int c){
    cout << "3 integer sum" << endl;
    return a + b + c;
}

int main()
{
    cout << sum(3, 7) << endl;
    cout << sum(3.4, 7.5) << endl;
    cout << sum(3, 4, 5) << endl;
    return 0;
}
