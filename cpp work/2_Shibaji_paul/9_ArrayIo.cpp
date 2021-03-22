#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    int n;

    cout << "Input how many numbers: ";
    cin >> n;

    while(n <= 0 || n > 100){
        cout << "Invalid input, valid range is > 0 and <= 100" << endl;
        cout << "Input again: ";
        cin >> n;
    }
    for(int i = 0; i < n; ++i){

        cout << "Input value for index: " << i << ": ";
        cin >> arr[i];

    }
    // printing back into the console
    cout << "Content of the array: " << endl;
    for(int i = n-1; i >= 0; --i){
        cout << arr[i] << " ";
    }





    return 0;
}
