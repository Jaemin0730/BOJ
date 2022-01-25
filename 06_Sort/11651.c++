#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <pair<int, int>> list;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		list.push_back({ b,a });
	}

	sort(list.begin(), list.end());

	for (int i = 0; i < n; i++) {
		cout << list[i].second << " " << list[i].first << "\n";
	}

	return 0;
}