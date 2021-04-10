//date: 2021-04-10
#include <bits/stdc++.h>
#include <map>

using namespace std;
#define ullint unsigned long long int

void displayMap(map<int, string> &s)
{
    cout << "The details of the students " << endl;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << it->first << ", " << it->second << endl;
    }
}
int main()
{
    //key,value
    map<int, string> students{{1, "Sakil"}, {2, "Jhon"}, {3, "Tanbir"}};

    students[4] = "Roger Moore";
    students[5] = "Soffiq";
    students[6] = "David";
    displayMap(students);
    //update key 4; if key exists
    students[4] = "Lily Collins";
    students.insert({7, "Test Name1"}); //if key is abalable it going to do nothing

    displayMap(students);

    //1st return a iterator and second return bool;
    pair<map<int, string>::iterator, bool> return_val = students.insert({10, "Test Name2"});
    if (return_val.second == false)
    {

        cout << "Insertion failed due to duplicate key " << endl;
        cout << return_val.first->first << " ," << return_val.first->second << endl;
    }
    else
    {
        cout << "Insertion was successful" << endl;
    }
    displayMap(students);
    return 0;
}