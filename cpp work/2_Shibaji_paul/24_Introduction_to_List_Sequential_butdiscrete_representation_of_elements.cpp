//date: 2021-04-05
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

void displayList(list<int> &lst)
{
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
    {
        cout << *it << " ,";
    }
    cout << endl;
}

int main()
{
    vector<int> v{10, 20, 30};
    list<int> lst{10, 20, 30};
    displayList(lst);
    // lst.front()=100;
    // displayList(lst);

    // lst.back()=300;
    // displayList(lst);

    // lst.push_back(5);
    // lst.push_front(9);
    // displayList(lst);
    // lst.pop_back();
    // lst.pop_front();
    // displayList(lst);

    list<int>::iterator it = lst.begin();

    // lst.insert(lst.begin(), 100); //vector cannot do this
    // --it;
    // while (it != lst.end())
    // {
    //     cout << *it << endl;
    //     ++it;
    // }

    // for (auto p : lst)
    // {
    //     cout << p << ", ";
    // }
// lst.reverse()//it going to make list pysically reverse
// cout<<lst.size()<<endl;
for (list<int>::reverse_iterator rit = lst.rbegin(); rit !=lst.rend(); rit++)
{
    cout<<*rit<<", ";
}


    return 0;
}