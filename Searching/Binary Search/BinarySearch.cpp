#include <iostream>
#include <vector>

using namespace std;


int BinarySearch(int key, vector<int> arr, int left, int right) {
	if( right >= left) {
		int mid = left + (right -left)/2;

		//if key value found
		if( arr[mid] == key ){
			return mid;
		}

		//key is less than middle value
		//search left of the middle of array
		if( arr[mid] > key ){
			return BinarySearch(key, arr, left, mid-1);
		}

		//key is greater than middle of sorted array
		//search rigth of the array
		return BinarySearch(key, arr, mid+1, right);
	}

	//returning -1, if key not found in the given array
	return -1;
}

int main() {

	vector<int> arr;
	int size, val;
	cout << "enter input\n";
	/*
	example input:.

	6                 	# size of array
	1 2 3 4 5 6			# array
	7					# key

	*/
	cin >> size;
	for (int i = 0; i < size; ++i) {
		cin >> val;
		arr.push_back(val);
	}
	int key;
	cin >> key;

	cout << "The given array\n";
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;

	cout << "key position: ";
	cout << BinarySearch(key, arr, 0, arr.size()-1) << endl;
	return 0;
}