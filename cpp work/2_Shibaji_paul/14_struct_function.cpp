//date: 2021-02-27
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

struct Account
{
    int accNo;
    string holderName;
    double balance;
};

Account readAccountData()
{
    Account acc;
    cout << "Input Account Number ";
    cin >> acc.accNo;
    cout << "input Holder Name : ";
    cin >> acc.holderName;
    cout << "Initial Balance : ";
    cin >> acc.balance;
    return acc;
}
// void printAccountData(Account acc)//using copy of obj//it cannot change the actual value
void printAccountData(Account &acc) //using reference//it can change the actual value
{
    cout << "Account Number " << acc.accNo << endl;
    cout << "Account Holder " << acc.holderName << endl;
    cout << "Account balance " << acc.balance << endl;
}

bool accountDebit(Account &acc, double amount)
{
    bool success = false;

    if (acc.balance >= amount)
    {
        acc.balance -= amount;
        success = true;
    }
    return success;
}

void accountCredit(Account &acc, double amount)
{
    acc.balance += amount;
}

int main()
{
     Account a;
    a = readAccountData();
    printAccountData(a);

    cout << "Input debit amount: ";
    double amount;
    cin >> amount;

    bool success = accountDebit(a, amount);
    if(success){
        cout << "Account debited with $" << amount << " successfully..." << endl;
        cout << "Current Balance: $" << a.balance << endl << endl;
    }
    else{
        cout << "Debit Unsuccessful, make sure that you have sufficient balance..." << endl << endl;
    }

}