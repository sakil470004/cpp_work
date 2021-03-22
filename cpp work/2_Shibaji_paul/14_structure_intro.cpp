//date: 2021-02-27
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

struct
    Student
{
    int student_id;
    string name;
    double grade_point;
};

int main()
{
    Student s1, s2, s3;
    s1.student_id = 1;
    s1.name = "Sakil khan";
    s1.grade_point = 9.95;

    s2.student_id = 2;
    s2.name = "Tanbir khan";
    s2.grade_point = 8.95;

    cout << "Id : " << s1.student_id << ", "
    <<"Name : "<<s1.name<<" ,"<<
    "Grade point "<< s1.grade_point<<endl;
    
     return 0;
}