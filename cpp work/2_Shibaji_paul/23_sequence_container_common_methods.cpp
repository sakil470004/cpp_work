#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>
using namespace std;

/**
Imp Sequence Containers: vector, list, deque, arrays, forward_list
------------------------------------------------------------------
Common methods for all sequence containers:
------------------------------------------------------------------
1. fill constructor
2. range constructor
3. fill assignment
4. insert

*/
void displayVector(vector<int>& v){
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
        cout << *it << ", ";
    }
    cout << endl;
}


void displayList(list<int>& lst){
    for(list<int>::iterator it = lst.begin(); it != lst.end(); ++it){
        cout << *it << ", ";
    }
    cout << endl;
}

int main()
{
    list<int> lst {1, 2, 3, 4};
    lst.erase (++(lst.begin()), lst.end());
    displayList(lst);
    return 0;
}
