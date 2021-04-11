//date: 2021-04-10
#include <bits/stdc++.h>
#include <map>//unorder_map is much more efficient than map//main reason for bacecket;
using namespace std;
#define ullint unsigned long long int

template <class K>
bool comparator(K left, K right)
{
    return left > right; //for decending order
}

template <class K, class T>
// void printMap(const multimap<K, T,bool(*)(K,K)> &aMap)
void printMap(const multimap<K, T> &aMap)
{
    for (auto it = aMap.begin(); it != aMap.end(); it++)
    {
        cout << it->first << ", " << it->second << endl;
    }
}

int main()
{
    multimap<string, string> school;
    // multimap<string,string,bool(*)(string,string)>school(comparator);

    typedef multimap<string, string>::iterator mmap_iterator;
    school.insert({"class-6", "Math"});
    school.insert({"class-6", "Physics"});

    school.insert({"class-2", "Drawing"});
    school.insert({"class-2", "Music"});
    school.insert({"class-2", "Playing"});

    school.insert({"class-4", "English"});
    school.insert({"class-4", "History"});
    school.insert({"class-4", "science"});

    school.insert({"class-7", "Math"});
    school.insert({"class-7", "Chemistry"});

    printMap(school);

    pair<mmap_iterator, mmap_iterator> return_val = school.equal_range("class-2");
    int count = distance(return_val.first, return_val.second);
    cout << "Total Entry " << count << endl;
    if (count > 0)
    {
        for (auto it = return_val.first; it != return_val.second; it++)
        {
            cout << it->first << ", " << it->second << endl;

            if (it->second == "Music")
                it->second="Movie";
        }
        // school.erase(return_val.first, return_val.second);
    }
    else
    {
        cout << "Target key does not exists " << endl;
    }
    //   multimap<string,string>::iterator it=  school.find("class-21");

    //   if(it!=school.end()){
    //       cout<<it->first<<" ,"<<it->second<<endl;
    //   }else{
    //       cout<<"Key could not be found..."<<endl;
    //   }

    //print
    cout << endl
         << "After operation"
         << endl<<endl;
    printMap(school);

    return 0;
}