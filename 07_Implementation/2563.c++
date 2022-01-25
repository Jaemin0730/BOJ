#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int save[105][105];

	int n;
	cin >> n;

	int count = 0;
	for (int k = 0; k < n; k++) {
		int x, y;
		cin >> x >> y;

		for (int i = y; i < y + 10; i++) {
			for (int j = x; j < x + 10; j++) {
					save[i][j] = 1;
			}
		}

	}

	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			if (save[i][j] == 1) {
				count++;
			}
		}
	}

	cout << count;
	return 0;
}