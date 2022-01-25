#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	queue <int> list;

	for (int i = 0; i < n; i++) {
		string word;
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
				cout << list.front() << "\n";
				list.pop();
			}
		}
		else if (word == "size") {
			cout << list.size() << "\n";
		}
		else if (word == "empty") {
			if (list.empty() == true) {
				cout << "1" << "\n";
			}
			else {
				cout << "0" << "\n";
			}
		}
		else if (word == "front") {
			if (list.empty() == true) {
				cout << "-1" << "\n";
			}
			else {
				cout << list.front() << "\n";
			}
		}
		else if (word == "back") {
			if (list.empty() == true) {
				cout << "-1" << "\n";
			}
			else {
				cout << list.back() << "\n";
			}
		}
	}
	return 0;
}