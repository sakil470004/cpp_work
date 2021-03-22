#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str ("You must know, first may no longer be first if second comes first!");
    string target("first");

    string::size_type index = str.find(target);


    while(index != string::npos){
            cout << "target string '" << target << "' found at index: " << index << endl;
            index = str.find(target, index + 1);

    }




    return 0;
}
