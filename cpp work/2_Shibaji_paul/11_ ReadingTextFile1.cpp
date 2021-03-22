#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("11_ ReadingTextFile1.txt");
    if (!fin){
        cout << "Error while opening file" << endl;
        exit(1);
    }
    int val;
    int count = 0;
    int sum = 0;
    while(!fin.eof()){
        fin >> val;
        count++;
        sum += val;
        cout << val << " ";
    }
    fin.close();
    cout << endl;
    cout << "Total number of integers in the file: " << count << endl;
    cout << "Total of all the integers in the file: " << sum << endl;
    double avg = (double)sum/count;
    cout << "Average: " << avg << endl;

    return 0;
}
