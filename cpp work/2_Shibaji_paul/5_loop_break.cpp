#include <iostream>

using namespace std;

int main()
{
    int i;

    for(i = 1; i <= 100; ++i){
        cout << i << endl;
        if (i % 5 == 0)
        {
            break;
        }


    }
    cout << i << endl;
    return 0;
}
