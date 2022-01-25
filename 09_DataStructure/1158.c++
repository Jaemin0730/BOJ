#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	queue <int> list;
	for (int i = 1; i <= n; i++) {
		list.push(i);
	}
	cout << "<";
	while (list.size() > 1) {
		for (int i = 1; i < k; i++) {
			int x = list.front();
			list.pop();
			list.push(x);
		}
		cout << list.front() << ", ";
		list.pop();	// k¹øÂ° Áö¿ö¶¥¤¾¤¾
	}

	cout << list.front() << ">";
	return 0;
}