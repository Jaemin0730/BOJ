#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	deque <int> list;
	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;

		if (word == "push_front") {
			int num;
			cin >> num;
			list.push_front(num);
		}
		else if (word == "push_back") {
			int num;
			cin >> num;
			list.push_back(num);
		}
		else if (word == "pop_front") {
			if (list.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << list.front() << "\n";
				list.pop_front();
			}
		}
		else if (word == "pop_back") {
			if (list.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << list.back() << "\n";
				list.pop_back();
			}
		}
		else if (word == "size") {
			cout << list.size() << "\n";
		}
		else if (word == "empty") {
			if (list.empty()) {
				cout << "1" << "\n";
			}
			else {
				cout << "0" << "\n";
			}
		}
		else if (word == "front") {
			if (list.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << list.front() << "\n";
			}
		}
		else if (word == "back") {
			if (list.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << list.back() << "\n";
			}
		}
	}

	return 0;
}