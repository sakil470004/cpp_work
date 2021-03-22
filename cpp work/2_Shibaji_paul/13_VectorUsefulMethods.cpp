#include <iostream>
#include <vector>

using namespace std;

void display(vector <string> &v){
    cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;
    cout << "Content of the vector: " << endl;
    for(vector<string>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << ", ";
    }
    cout << endl;
}
int main()
{
    vector <string> names {"John", "Linda", "Ravi", "Dan", "Tony", "Alvina"};
    display(names);

    names.insert (names.begin() + 2, "WWW");
    display(names);

    names.pop_back();
    display(names);




    return 0;
}
