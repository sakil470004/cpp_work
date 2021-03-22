#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int i = 1;
    while(i <= n){
        cout << "i = " << i << endl;

        for(int j = 1; j <= n; ++j){
            cout << "   j = " << j << endl;
        }

        cout << endl;
        ++i;
    }
    return 0;
}
