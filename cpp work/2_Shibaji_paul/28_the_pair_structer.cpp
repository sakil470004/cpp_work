//date: 2021-04-09
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

int main()
{
    pair<string, int> studen1("John Rambo ", 20);
    cout << studen1.first << " , " << studen1.second << endl;

    pair<string, int> studen2;
    studen2 = make_pair(string("shelly"), 20);
    cout << studen2.first << " , " << studen2.second << endl;

    pair<string, int> studen3;
    studen3.first = "Sakil";
    studen3.second = 21;
    cout << studen3.first << " , " << studen3.second << endl;

    vector<pair<string, int>> students;
    students.push_back(make_pair("Shofiq", 21));
    students.push_back(make_pair("sami", 10));
    students.push_back(make_pair("Sakil", 11));

    for (auto it = students.begin(); it != students.end(); it++)
    {
        cout << it->first << ", " << it->second << endl;
    }

    return 0;
}