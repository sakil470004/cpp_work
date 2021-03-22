#include <iostream>

using namespace std;
int factorial(int n)
{
    int fact = 1;

    if (n < 0)
    {
        string strError = "Unable to calculate factorial of nagative number";
        throw strError;
    }

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        cout << "it in the fact " << fact << endl;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    try
    {
        cin >> n;
        cout << factorial(n) << endl;
    }
    catch (std::string ex)
    {
        cout << ex << endl;
    }
}