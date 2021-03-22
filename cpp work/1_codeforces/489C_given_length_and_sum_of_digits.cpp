//date: 2021-03-16
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

int main()
{

    int m, s;
    //take input
    cin >> m >> s;
    if (m == 1 && s == 0)
    {
        cout << "0 0" << endl;
        return 0;
    }
    //for reduce time complexcity
    if (s < 1 || s > m * 9)
    { //if s is not geter than m*9 that's mean the number is out of our length;
        cout << "-1 -1" << endl;
        return 0;
    }

    string s1, s2;

    //find the big number and store it into the s1;
    for (int i = 0; i < m; ++i)
    {
        int x = min(9, s);
        s -= x;              //decrese s;
        s2 += char(x + '0'); // '0' convert int to char string ;
    }

    //store s2 in the s1
    s1 = s2;
    //reverse s1;
    reverse(s1.begin(), s1.end());

    //check if there is 0 in the frist;
    if (s1[0] == '0')
    {
        for (int i = 0; i < m; ++i)
            if (s1[i] > '0')
            {
                ++s1[0];
                --s1[i];
                break;
            }
    }

    cout << s1 << ' ' << s2 << endl;

    return 0;
}