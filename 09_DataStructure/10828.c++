#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	stack <int> list;
	int n;
	string word;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> word;
		if (word == "push") {
			int a;
			cin >> a;
			list.push(a);
		}
		else if (word == "pop") {
			if (list.empty() == true) {
				cout << "-1" << "\n";
			}
			else {
				cout << list.top() << "\n";
				list.pop();
			}
		}
		else if (word == "size") {
			cout << list.size() << "\n";
		}
		else if (word == "empty") {
			cout << list.empty() << "\n";
		}
		else if (word == "top") {
			if (list.empty() == true) {
				cout << "-1" << "\n";
			}
			else {
				cout << list.top() << "\n";
			}
		}
	}
	return 0;
}