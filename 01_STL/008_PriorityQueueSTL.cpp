#include<iostream>
#include<queue>
using namespace std;

class Compare {
public:
	bool operator()(int a, int b) {
		return (a > b);
	}
};

int main() {
	int arr[] = {10, 15, 20, 13, 6, 90};
	int n = sizeof(arr) / sizeof(int);

	priority_queue<int> maxHeap;
	for(int x : arr) {
		maxHeap.push(x);
	}

	while(!maxHeap.empty()) {
		cout << maxHeap.top() << endl;
		maxHeap.pop();	
	}
	cout << endl;
	// priority_queue<int, vector<int>, greater<int> > minHeap;
	priority_queue<int, vector<int>, Compare > minHeap;
	for(int x : arr) minHeap.push(x);
	while(!minHeap.empty()) {
		cout << minHeap.top() << endl;
		minHeap.pop();
	}

	return 0;
}