#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main() {
	// Create a 'Deck'
	deque<int> first; // Empty deque of ints
	deque<int> second(4, 100); // Four ints with value 100
	deque<int> third(second.begin(), second.end()); // Iterating through second
	deque<int> fourth(third); // a copy of third

	// the iterator constructor can be used to copy arrays
	int myints[] = {16,2,77,29};
	int n = sizeof(myints)/sizeof(int);
	deque<int> fifth(myints, myints + n);

	deque<int> dq(10);
	for(int i = 0; i < 10; i++) {
		dq[i] = (i * i);
	}

	for(auto x : dq) {
		cout << x << ", ";
	}
	cout << "Size : " << dq.size() << endl;
	dq.push_back(123);
	cout << "Size : " << dq.size() << endl;
	dq.push_front(13);
	for(auto x : dq) {
		cout << x << ", ";
	}
		
	return 0;
}