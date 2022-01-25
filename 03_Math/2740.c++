#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int a[101][101];
	int b[101][101];
	int c[101][101];	// °á°ú
	int n, m, k;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	cin >> m >> k;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			for (int t = 0; t < m; t++) {
				c[i][j] += a[i][t] * b[t][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}