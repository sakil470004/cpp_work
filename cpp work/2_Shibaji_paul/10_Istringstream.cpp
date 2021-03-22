#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string source = "John:10,Tina:20,Robin:18";

    istringstream iss (source);

    string part;
    while(getline(iss, part, ',')){
        //cout << part << endl;
        istringstream iss2(part);
        string rec;
        while(getline(iss2, rec, ':')){//"iss2 given String" "rec store point" ,": seperator"
            cout << rec << endl;
        }
        cout << endl;
    }



    return 0;
}
