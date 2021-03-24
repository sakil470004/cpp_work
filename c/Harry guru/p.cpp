#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int  row_count;
    cin>>row_count;
    int first_col=1;
    int fib1=1;
    int fib2=2;
    int fib=fib1+fib2;
    int col_count=1;
    while (row_count--)
    {
        int col=first_col;
        for (int i = 0; i < col_count; i++)
        {
            cout<<col<<" ";
            col+=2;
        }
        cout<<endl;
        first_col=first_col+fib;
        fib1=fib2;
        fib2=fib;
        fib=fib1+fib2;
        col_count++;
    }

    return 0;
}
