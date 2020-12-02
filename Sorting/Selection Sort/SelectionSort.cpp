/*
	*Select* minimum in an array and put it in front of array
	Selection Sort

	input format:
		first enter size of array
		then array

		eg.

		5
		5 4 3 2 1
*/
#include <iostream>
using namespace std;

void SelectionSort(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		int min = i;                              //min will contain the index of minimum value element
		for (int j = i; j < size; j++) {          //this loop will find the min position
			if (arr[min] > arr[j])
				min = j;
		}

		//swap min position with ith
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}

int main() {
	int size;
	cin >> size;

	int arr[size];
	for (int i = 0; i < size; i++)
		cin >> arr[i];

	SelectionSort(arr, size);

	cout << "Sorted array: \n";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}