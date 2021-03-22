//date: 2021-03-12
#include <bits/stdc++.h>

using namespace std;
#define ullint unsigned long long int

int main()
{
    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a, b, c, d;
           
            cin >> a >> b >> c >> d;
            double x = sqrt((((a - c) * (a - c)) + ((b - d) * (b - d))));
            // cout<<"x: "<<x<<endl;
            sum += x;
        }
        cout << sum << endl;
    }
    return 0;
}





// int main()
// {
//     int t;
//     cin >> t;

//     for (int j = 0; j < t; j++)
//     {
//         int n;
//         cin >> n;
//         double sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             int a, b, c, d;
//             cin >> a >> b >> c >> d;
//             double x = sqrt((((a - c) * (a - c)) + ((b - d) * (b - d))));
//             sum += x;
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }
