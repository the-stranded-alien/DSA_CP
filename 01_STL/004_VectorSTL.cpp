#include<iostream>
#include<vector>
using namespace std;

int main() {

	// Empty Constructor
	vector<int> first;

	// Fill Constructor (4 integers with value 20)
	vector<int> second(4, 20);
	
	// Range Constructor (ConstructingFrom Arrays)
	int numbers[] = {10, 20, 30, 40};
	vector<int> third(numbers, numbers + 4);

	// Copy Constructor
	vector<int> fourth(third);

	// Another Way
	vector<int> fifth = {1,2,3,4,10};

	vector<int> v;
	v.reserve(100);
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int no;
		cin >> no;
		v.push_back(no);
		cout << "Capacity : " << v.capacity() << " & Size : " << v.size() << endl;
	}

	vector<int> v2(10, 0);
	for(int x : v2) cout << x << " ";

	// Sort
	sort(v.begin(), v.end());

	return 0;
}

