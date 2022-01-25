#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	vector <int> list;
	int sum = 0;
	for (int i = 0; i < 7; i++) {
		int num;
		cin >> num;

		if (num % 2 == 1) {
			list.push_back(num);
			sum += num;
		}
		else {
			continue;
		}
	}
	sort(list.begin(), list.end());
	
	if (list.empty()) {
		cout << "-1";
	}
	else {
		cout << sum << "\n";
		cout << list[0] << "\n";
	}
	return 0;
}