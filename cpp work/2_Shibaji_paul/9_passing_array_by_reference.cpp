#include <iostream>

using namespace std;

const int array_size = 5;


void printArray(int (&p)[array_size]){
   for(int i = 0; i < array_size; i++){
        cout << p[i] << " ";
   }
}

int main()
{
    int x[] = {10, 20, 30, 40, 50};
    printArray(x);
    return 0;
}
