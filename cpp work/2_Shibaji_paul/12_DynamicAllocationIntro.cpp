#include <iostream>
#include <iomanip>

using namespace std;
void display(int *p, int n){
    for(int i = 0; i < n; ++i){
        cout << setw(4) << p[i];
    }
    cout << endl;
}
int main()
{
    int x[100];

    cout << "Input how many integer elements that you want to process: ";
    int n;
    cin >> n;

    int *p { new int[n] };   // allocating using uniform initialization.
	// int *p = new int[n];     // alternative traditional approach of the previous statement.			
    int *ptr = new int(10);   // single integer object allocation in the heap

    for(int i = 0; i < n; ++i){
        cout << "Next int: ";
        cin >> *(p + i);
    }

    display(p, n);

    delete [] p;
    delete ptr;
    return 0;
}
