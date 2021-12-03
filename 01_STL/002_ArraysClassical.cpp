#include<iostream>
using namespace std;

// Passing array to function
// ARRAY IS PASSED BY REFERENCE
void updateArray(int arr[], int i, int val) {
	arr[i] = val;
	return;
}

// Size of the array as a parameter
void print(int arr[], int n) {
	for(int i = 0; i < n; i++) {
		cout << arr[i] << ", ";
	}
}

// void arraySize(int arr[]) {
	// cout << "Array Size in Function : " << sizeof(arr) << endl;
// }

int main() {

	int arr[] = {1, 5, 4, 3, 2}; // Init
	int n = sizeof(arr) / sizeof(int);
	
	cout << "Array Size in Main : " << sizeof(arr) << endl;
	// arraySize(arr);

	// Print base address, Hexadecimal Address
	cout << arr << endl;
	// Actual Array is updated
	updateArray(arr, 1, 13);
	print(arr, n);

	return 0;
}