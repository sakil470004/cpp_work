#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v {10, 20, 30, 40, 50};
    int *p = v.data();
    cout << *p << endl;
    cout << *(p+1) << endl;

    *(p+2) = *(p+2) + 5;
    for(int i = 0; i < 5; ++i){
        cout << p[i] << " ";
    }
    cout << endl;
    cout << "Content printed using vector object " << endl;
    for(int k:v){
        cout << k << " ";
    }
    cout << endl;

    return 0;
}
