#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

void updateArray(array<int, 6> &arr, int i, int val) {
	arr[i] = val;
	return;
}

void print(const array<int, 6> &arr) {
	int n = arr.size();
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

int main() {

	array<int, 6> arr = {1, 2, 3, 6, 7, 8};
	arr[0] = 10;

	// Sort
	sort(arr.begin(), arr.end());

	// Fill
	array<int, 10> fives;
	fives.fill(5);
	for(int i = 0; i < fives.size(); i++) {
		cout << fives[i] << " ";
	}
	cout << endl;

	// For Each Loop
	for(int x : fives) {
		cout << x << " ";
	}
	cout << endl;

	updateArray(arr, 1, 13);

	print(arr);

	return 0;
}