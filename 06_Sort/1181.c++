#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector <pair<int, string>>list;

	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;
		list.push_back({ word.length(), word});
	}
	sort(list.begin(), list.end());

	for (int i = 1; i < n; i++) {
		if (list[i - 1].second == list[i].second) {
			list[i - 1].first = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		if (list[i].first == 0) {
			continue;
		}
		cout << list[i].second << "\n";
	}

	return 0;
}