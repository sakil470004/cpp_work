#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
   ofstream fout;
//    fout.open("c:/demo1/myfile.txt");
   fout.open("11.WriteToTextFile.txt");
   if (!fout){
    cout << "Error in opening file" << endl;
    exit(1);
   }
   fout << "Hello world!" << endl;
   fout << "This will be the second line in the file" << endl;
   int a = 35;
   double p = 35.75;
   fout << "a = " << a << ", p = " << p << endl;
   fout.close();


    return 0;
}
