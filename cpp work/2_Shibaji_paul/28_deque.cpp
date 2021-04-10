//date: 2021-04-09
#include <bits/stdc++.h>
#include <deque>

using namespace std;
#define ullint unsigned long long int

void display_deque(const deque<int> &deq)
{
    for (auto it = deq.begin(); it != deq.end(); it++)
    {
        cout << *it << " , ";
    }
    cout << endl;
}

int main()
{
    deque<int> deq{1, 2, 3, 4, 5};
    deq.push_back(100);
    deq.push_front(200);
    display_deque(deq);
    deq.pop_back();
    display_deque(deq);
    deq[0]=10;
    deq[deq.size()-1]=20;
    display_deque(deq);
    return 0;
}