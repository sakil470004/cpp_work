#include <iostream>

using namespace std;

int main()
{
    int temp1 = 300, temp2 = 353;
    cout << "Address of temp1: " <<  &temp1 << endl;
    cout << "Address of temp2: " <<  &temp2 << endl;
    int *t2 = &temp2;
    cout << "Content of t2: " <<  t2 << endl;
    cout << "Content of the location: " << *t2 << endl;
    t2 = t2 + 1;
    cout << "Content of t2: " << t2 << endl;
    cout << "Content at location pointed by t2 " << *t2 << endl;

    char *k;
    k  = (char *)t2;
    cout << "*k is: " << *k << endl;


    k = (char *)&temp2;
    cout << "*k is: " << *k << endl;
    return 0;
}
