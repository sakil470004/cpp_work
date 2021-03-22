#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    vector <int> v;

    ifstream fin;
	fin.open("data.txt");

    if (!fin){
        cout << "Unable to open file" << endl;
        exit(0);
    }

    // int i = 0;
    while(!fin.eof()){
        int k;
        fin >> k;
        // v[i] = k;
        // ++i;
        v.push_back(k);
    }
    fin.close();

    int total = 0;
    for(int p:v){
        cout << p << ", ";
        total += p;
    }
    double avg = (double)total / v.size();
    cout << endl;
    cout << "Average: " << avg << endl;


    return 0;
}
