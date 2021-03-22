#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(NULL));//it must need for a rendom number
    for(int i = 1; i <= 10; ++i){
        cout << rand() % 100 << endl;
    }
    return 0;
}
