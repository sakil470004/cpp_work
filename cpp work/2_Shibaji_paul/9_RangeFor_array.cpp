#include <iostream>

using namespace std;
const int size_of_array = 5;

void printArray(int (&x)[size_of_array]){
    cout << "In the function: " << endl;
    for(auto k:x){
        cout << k << " ";
    }

}

int main()
{
    int x[] = {10, 20, 30, 40, 50};

    /*
    for(int i = 0; i < size_of_array; ++i){
        cout << x[i] << endl;
    }
    */
    for(auto &p:x){
        //cout << p << " ";
        p *= 2;
    }

    printArray(x);







    return 0;
}
