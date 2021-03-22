#include <iostream>

using namespace std;

int main()
{

	int arr[10]; // 1Dz array with 10 elements, the index of the first element is 0 and that of last is 9.
	arr[0] = 5;	 // 5 is assigned to first room.
	arr[1] = 4;	 // 4 s assigned to second room.

	arr[9] = arr[0] + arr[1]; // content of first and second rooms are added and the result is assigned to last room.

	// printing the content of the last room:
	cout << "Content of last room: " << arr[9] << endl;
	int arr2[10] = {0};
	for (int i = 0; i < 10; i++)
	{
		cout << arr2[i] << " ";
	}

	return 0;
}
