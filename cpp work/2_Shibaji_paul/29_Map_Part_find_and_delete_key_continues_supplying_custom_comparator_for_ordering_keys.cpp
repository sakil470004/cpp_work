//date: 2021-04-10
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

template <class K>
bool comparator(K left, K right)
{
    return left > right; //for decending order
}

template <class K, class T>
void printMap(const map<K, T, bool (*)(K, K)> &aMap)
{
    for (auto it = aMap.begin(); it != aMap.end(); it++)
    {
        cout << it->first << ", " << it->second << endl;
    }
}

int main()
{ //key,value
    map<int, string, bool (*)(int, int)> students(comparator);
    students[3] = "Roger Moore";
    students[1] = "Soffiq";
    students[5] = "David";
    students[2] = "David";
    printMap(students);

    //find student
//delete need find for it;
    map<int, string, bool (*)(int, int)>::iterator it_start = students.find(5);
    map<int, string, bool (*)(int, int)>::iterator it_end = students.find(2);
  
  if(students.end()!=it_start){
      students.erase(it_start,it_end);//delete between those two all value but do not delete it_end;
  }
  printMap(students);
    // if (it != students.end())
    // {
    //     cout << "Key exists " << it->second << endl;
    // }else{
    //     cout<<"Key not found "<<endl;
    // }

    // if (students[10] == "")
    // {
    //     cout << "Students not found " << endl;
    // }
    // else
    // {
    //     cout << "name is : " << students[10] << endl;
    // }


    return 0;
}
