#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter any number (0 to terminate): ";
    cin >> n;
    int counter = 0;

    while(n!=0){
        sum += n;
        counter++;
        cout << "Total numbers added so far: " << counter << endl;
        cout << "Enter any number (0 to terminate): ";

        cin >> n;
    }
    cout << "Sum of all the numbers: " << sum << endl;
    double avg = (double)sum / counter;
    cout << "Average: " << avg << endl;

    return 0;
}
