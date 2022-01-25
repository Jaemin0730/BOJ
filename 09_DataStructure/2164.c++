#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	queue <int> list;
	for (int i = 1; i <= n; i++) {
		list.push(i);
	}

	while (1) {
		if (list.size() == 1) {
			cout << list.front();
			break;
		}
		else {
			list.pop();
			list.push(list.front());
			list.pop();
		}
	}
	return 0;
}