#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <stack>

/*
COMMON METHODS AND OPERATORS APPLICABLE TO ALL CONTAINER CLASSES
---------------------------------------------------------------
1. Default Constructor.
2. Copy constructor.
3. Assignment operator
4. == and !=
5. >, <, >=, <=
6. begin() and end()
7. swap






*/

using namespace std;

int main()
{

    vector <int> v1 {10, 20, 30};
    vector <int> v2 {1, 2, 3, 4};
    int a=10,b=30; 

    v1.swap(v2);
    cout << "Content of v1: " << endl;
    for(vector<int>::iterator it = v1.begin(); it != v1.end(); ++it){
        cout << *it << ", ";
    }
    cout << endl;

    cout << "Content of v2: " << endl;
    for(vector<int>::iterator it = v2.begin(); it != v2.end(); ++it){
        cout << *it << ", ";
    }
    cout << endl;

    return 0;
}
