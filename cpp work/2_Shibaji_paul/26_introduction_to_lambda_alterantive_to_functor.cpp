//date: 2021-04-09
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ullint unsigned long long int
void displayVector(vector<int> &v)
{
  cout << "content of the vector is :" << endl;
  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " , ";
  }
  cout << endl;
}

// struct is_positive
// {
//   bool operator()(int val)
//   {
//     return val >= 0;
//   }
// };

int main()
{

  vector<int> v{1, -1, 2, -5, -10, 3, 7, 12, 4, 3};

  int count = count_if(v.begin(), v.end(), [](int val) {
    return val>=0;
  });
  cout << count;

  return 0;
}