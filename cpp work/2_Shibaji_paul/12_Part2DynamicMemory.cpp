#include <iostream>
using namespace std;
int* fun(int n){
    int *p = new int[n];

    time_t t = time(NULL);
    srand(t);

    for(int i = 0; i < n; ++i){
        p[i] = rand() % 100;
    }
    // doing some task here with the block pointed by p

    return p;

}
int main()
{
    int *ptr = fun(10000);
    // process(ptr);
    delete [] ptr;

    fun(5000);

    return 0;
}

