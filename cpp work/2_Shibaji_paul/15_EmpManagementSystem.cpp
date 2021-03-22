//date: 2021-03-01
#include <bits/stdc++.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

const int EMP_ID_WIDTH = 8;
const int EMP_NAME_WIDTH = 20;
const int EMP_EMAIL_WIDTH = 25;
const int EMP_NUMERIC_WIDTH = 10;
const int TOTAL_WIDTH = 100;

struct Employee
{
    int empId;
    string name;
    double basicSalar;
    double pf;
    double healthInsAmt;
    string email;
};
//function pototype
void readFile(vector<Employee> &v_emp);
void printMenu();
void doTask(vector<Employee> &v_emp, int option);
void addEmployee(vector<Employee> &v_emp);
int searchEmployee(vector<Employee> v_emp, int targetEmpId);
void printEmployees(vector<Employee> v_emp);
void printEmployee(Employee e);
double getNetSalary(Employee e);
void saveToFile(vector<Employee> v_emp);
bool deleteEmployee(vector<Employee> &v_emp, int targetEmpId);

void readFile(vector<Employee> &v_emp)
{
    ifstream fin("15_empManagementSystem.txt");
    if (!fin) //if file is not going to read;
    {
        cout << "Unable to open database file emp.txt" << endl
             << "Make sure that the file exists" << endl;
        exit(1);
    }

    //here now file is open;
    string line;
    int recNo = 0;
    while (!fin.eof()) //if it not endOfFile ran again
    {
        std::getline(fin, line); //get a single line from file
        recNo++;
        // cout << recNo << "-" << line << endl;
        //sice we have successfully read a line from the file
        // so it is time to parse each token for field values

        istringstream iss(line);
        string strEmpId;
        string strName;
        string strBasicSalary;
        string strpf;
        string strHealthInsAmt;
        string strEmail;

        std::getline(iss, strEmpId, ','); //101,John Alter,5000,75,100,jdoe@gmail.com
                                          // getline(mainStorepoint,newStorePoint,saparator);
        std::getline(iss, strName, ',');
        std::getline(iss, strBasicSalary, ',');
        std::getline(iss, strpf, ',');
        std::getline(iss, strHealthInsAmt, ',');
        std::getline(iss, strEmail, ',');

        Employee temp;
        temp.empId = atoi(strEmpId.c_str());
        temp.name = strName;
        temp.basicSalar = atof(strBasicSalary.c_str());
        temp.pf = atof(strpf.c_str());
        temp.healthInsAmt = atof(strHealthInsAmt.c_str());
        temp.email = strEmail;
        v_emp.push_back(temp);
    }
    fin.close();
}

void printMenu()
{
    cout << "1. Add Employee " << endl;
    cout << "2. Print Employee " << endl;
    cout << "3. Search Employee " << endl;
    cout << "4. Delete Employee " << endl;
    cout << "5. Save " << endl;
    cout << "6. Exit " << endl;
}

void doTask(vector<Employee> &v_emp, int option)
{

    switch (option)
    {
    case 1:
        addEmployee(v_emp);
        break;

    case 2:
        printEmployees(v_emp);
        break;

    case 3:
        int targetEmpId;
        int index;
        cout << "Enter emp id to search : ";
        cin >> targetEmpId;
        index = searchEmployee(v_emp, targetEmpId);
        if (index == -1)
        {
            cout << "Employee with id : " << targetEmpId << " does not exists" << endl;
        }
        else
        {
            cout << "Employee with id : " << targetEmpId << " found" << endl;
            printEmployee(v_emp[index]);
        }

        break;

    case 4:
        int targetEmpIdDel;
        
        cout << "Enter emp id to delete : ";
        cin >> targetEmpIdDel;
       
        if (deleteEmployee(v_emp,targetEmpIdDel))
        {
            cout <<"Employee with id : "<<targetEmpIdDel<<" deleted successfully" << endl;
        }
        else
        {
            cout <<"Employee with id : "<<targetEmpIdDel<<" could not be deleted" << endl;
          
        }
        break;

    case 5:
        saveToFile(v_emp);

        break;

    default:
        cout << "Invalid menu option chosen , valid options are from 1-6 " << endl;
        break;
    }
}
void addEmployee(vector<Employee> &v_emp)
{
    Employee temp;
    bool isDuplicate = false;
    do
    {
        cout << "Emp Id : ";
        cin >> temp.empId;
        isDuplicate = false;
        if (searchEmployee(v_emp, temp.empId) != -1)
        {
            isDuplicate = true;
            cout << "Employee id : " << temp.empId << " already exists , please input a unique id" << endl;
        }
    } while (isDuplicate);

    cout << "Name : ";

    cin.clear(); //for handle enter key;
    cin.ignore(INT_MAX, '\n');

    std::getline(cin, temp.name);

    cout << "Basic Salary($): ";
    cin >> temp.basicSalar;
    cout << "PF($): ";
    cin >> temp.pf;
    cout << "Health Ins($): ";
    cin >> temp.healthInsAmt;
    cout << "Email: ";

    cin.clear(); //for handle enter key;
    cin.ignore(INT_MAX, '\n');

    std::getline(cin, temp.email);

    v_emp.push_back(temp);
    cout << "Employee with id: " << temp.empId << " added successfully" << endl;
    cout << "Total employees: " << v_emp.size() << endl
         << endl;
}
int searchEmployee(vector<Employee> v_emp, int targetEmpId)
{
    for (int i = 0; i < v_emp.size(); i++)
    {
        if (v_emp[i].empId == targetEmpId)
        {
            return i;
        }
    }
    return -1;
}

void printEmployees(vector<Employee> v_emp)
{
    cout << endl;
    //first we need give hedding
    cout << setw(EMP_ID_WIDTH) << left << "EmpId"
         << setw(EMP_NAME_WIDTH) << left << "Name"
         << setw(EMP_EMAIL_WIDTH) << left << "Email"
         << setw(EMP_NUMERIC_WIDTH) << right << "Basic ($)"
         << setw(EMP_NUMERIC_WIDTH) << right << "PF ($)"
         << setw(EMP_NUMERIC_WIDTH) << right << "HltIns ($)"
         << setw(EMP_NUMERIC_WIDTH) << right << "Net($)"
         << endl;
    cout << setw(TOTAL_WIDTH) << setfill('-') << " " << endl;
    cout << setfill(' '); //for reset setfill
    double totalBasic = 0.0;
    double totalPfDeduction = 0.0;
    double totalHealthIns = 0.0;
    double totalNetSalary = 0.0;

    for (vector<Employee>::iterator it = v_emp.begin(); it != v_emp.end(); it++)
    {
        printEmployee(*it);

        totalBasic += it->basicSalar;
        totalPfDeduction += it->pf;
        totalHealthIns += it->healthInsAmt;
        totalNetSalary += getNetSalary(*it);
    }
    cout << setw(TOTAL_WIDTH) << setfill('-') << " " << endl;
    cout << setfill(' '); //for reset setfill

    cout << setw(EMP_ID_WIDTH) << left << "Total"
         << setw(EMP_NAME_WIDTH) << left << "In ($)"
         << setw(EMP_EMAIL_WIDTH) << " "
         << setw(EMP_NUMERIC_WIDTH) << setprecision(2) << right << fixed << totalBasic
         << setw(EMP_NUMERIC_WIDTH) << setprecision(2) << right << fixed << totalPfDeduction
         << setw(EMP_NUMERIC_WIDTH) << setprecision(2) << right << fixed << totalHealthIns
         << setw(EMP_NUMERIC_WIDTH) << setprecision(2) << right << fixed << totalNetSalary
         << endl;
}
void printEmployee(Employee e)
{
    cout << setw(EMP_ID_WIDTH) << left << e.empId
         << setw(EMP_NAME_WIDTH) << left << e.name
         << setw(EMP_EMAIL_WIDTH) << left << e.email
         << setw(EMP_NUMERIC_WIDTH) << setprecision(2) << right << fixed << e.basicSalar
         << setw(EMP_NUMERIC_WIDTH) << setprecision(2) << right << fixed << e.pf
         << setw(EMP_NUMERIC_WIDTH) << setprecision(2) << right << fixed << e.healthInsAmt
         << setw(EMP_NUMERIC_WIDTH) << setprecision(2) << right << fixed << getNetSalary(e)
         << endl;
}
double getNetSalary(Employee e)
{
    return e.basicSalar - (e.pf + e.healthInsAmt);
}

void saveToFile(vector<Employee> v_emp)
{
    ofstream fout("15_empManagementSystem.txt");
    if (!fout)
    {
        cout << "Unable to open the data file " << endl;
        return;
    }
    int recCount = 0;
    for (vector<Employee>::iterator it = v_emp.begin(); it != v_emp.end(); it++)
    {
        fout << it->empId << ","
             << it->name << ","
             << it->basicSalar << ","
             << it->pf << ","
             << it->healthInsAmt << ","
             << it->email;
        recCount++;
        if (recCount != v_emp.size())
        {
            fout << endl;
        }
    }
    cout << "Successfully saved the file" << endl;
    fout.close();
}

bool deleteEmployee(vector<Employee> &v_emp, int targetEmpId)
{
    int index = searchEmployee(v_emp, targetEmpId);
    if (index == -1)
    {
        return false;
    }
    //record found a index;
    cout << "Target emploee with id : " << targetEmpId << " found:  " << endl;
    printEmployee(v_emp[index]);
    cout << "Are you sure to delete? Input 1 to delete 0 to exit " << endl;
    int option;
    cin >> option;
    if (option == 1)
    {
        v_emp.erase(v_emp.begin() + index);
        return true;
    }
    return false;
}

int main()
{
    vector<Employee> v_emp;
    readFile(v_emp);
    cout << "Total " << v_emp.size() << " record from data file" << endl;
    printMenu();

    bool quit = false;
    while (!quit)
    {
        cout << "Input your option: ";
        int option;
        cin >> option;
        if (option == 6)
        {
            quit = true;
        }
        else
        {
            doTask(v_emp, option);
        }
    }

    return 0;
}