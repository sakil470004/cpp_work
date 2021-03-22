#include <iostream>
#include <string>


using namespace std;

int main()
{
    string str = "Hello";
    /*
    string::iterator it = str.begin();
    while(it != str.end()){
       //cout << *it << ", ";
       if (*it >= 'a' && *it <= 'z'){
        *it -= 32;
       }
       ++it;
    }
    */
    string::reverse_iterator rit = str.rbegin();
    while(rit != str.rend()){
        cout << *rit << ", ";
        ++rit;
    }

    //cout << str << endl;
    return 0;
}
