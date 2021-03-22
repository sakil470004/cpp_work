#include <iostream>

using namespace std;

int main()
{
    string str("Hello John! Welcome, to my C++ course. Good luck.");
    string target ("+. !,");

    string::size_type pos = str.find_first_not_of(target);
    // string::size_type pos = str.find_last_not_of(target);


    while(pos != string::npos){
        // cout << "Found '" << str[pos]  << "' at: " << pos << endl;
        str[pos] = '$';
        pos = str.find_first_not_of(target, pos+1);

    }
    cout << str << endl;

    return 0;
}
