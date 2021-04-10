//date: 2021-04-09
#include <bits/stdc++.h>
#include <stack>

using namespace std;
#define ullint unsigned long long int

int main()
{
    vector <int> vect(3,100);
    stack<int,vector<int>> my_stack(vect);

     cout << "size of stack " << my_stack.size() << endl;

    // while (!my_stack.empty())
    // {
    //     cout << "The to element : " << my_stack.top() << endl;
    //     my_stack.pop();
    // }
   
   
    // stack<int> my_stack;
    my_stack.push(100);
    my_stack.push(200);
    my_stack.push(300);
    cout << "size of stack " << my_stack.size() << endl;

    while (!my_stack.empty())
    {
        cout << "The to element : " << my_stack.top() << endl;
        my_stack.pop();
    }
    return 0;
}