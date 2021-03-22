#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "peace is my goal and program is peace";
    //str.clear();
    /*
    if(str.empty()){
        cout << "String is empty!!" << endl;
    }
    else{
        cout << "String is NOT empty!!" << endl;
    }
    */
    str.erase(str.begin()+12, str.end()-5);


    cout << str << endl;


    return 0;
}
