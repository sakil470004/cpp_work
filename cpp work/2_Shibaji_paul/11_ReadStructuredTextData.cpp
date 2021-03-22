#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iomanip>


using namespace std;
double getAverage(string strMarks);
char getGrade(double avg);

int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("11_ReadStructuredTextData.txt");
    if (!fin){
        cout << "Error while opening file" << endl;
        exit(1);
    }

    fout.open("11_ReadStructuredTextData_report.txt");
    if (!fout){
        cout << "Error while opening output file reports.txt" << endl;
        exit(1);
    }


    string line;
    fout << setw(15) << left << "Name" << " "
         << setw(7) << left  <<"Average" << " "
         << setw(5) << left << "Grade" << " " << endl;

    fout << string(30, '-') << endl;
    while(!fin.eof()){
        getline(fin, line);
        //cout << line << endl;
        istringstream iss1(line);
        string name;
        string strMarks;
        getline(iss1, name, ':');
        getline(iss1, strMarks, ':');

        double avg = getAverage(strMarks);
        char grade = getGrade(avg);
        fout << setw(15) << left <<name
             << setw(7) << right <<setprecision(2) << fixed << avg
             << setw(5) << right << grade << endl;

        /*cout << "Name: " << name << ", Marks: " << strMarks
             << ", Average: " << avg << ", Grade: " << grade << endl;
             */

    }

    fin.close();
    fout.close();
    cout << "reports.txt has been generated..." << endl;
    return 0;
}

double getAverage(string strMarks){
    // strMarks "70,80,90"
    istringstream iss2(strMarks);
    string m;
    int total = 0;
    while(!iss2.eof()){
        getline(iss2, m, ',');
        total = total + atoi(m.c_str());
    }
    double avg = (double)total / 3;
    return avg;
}

char getGrade(double avg){
    if (avg >= 90.0){
        return 'A';
    }
    else if(avg >= 80.0 && avg < 90.0){
        return 'B';
    }
     else if(avg >= 70 && avg < 80){
        return 'C';
    }
    else if (avg >= 60 && avg < 70){
        return 'D';
    }
    else if (avg >= 50 && avg < 60){
        return 'E';
    }
    else {
        return 'F';
    }

}
