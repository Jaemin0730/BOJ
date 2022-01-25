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

	int a[1000001] = { 0, };
	int m, n;
	cin >> m >> n;
	a[1] = 1;

	for (int i = 2; i <= n; i++) {
		for (int j = 2; i * j <= n; j++) {
			a[i * j] = 1;
		}
	}
	for (int i = m; i <= n; i++) {
		if (a[i] == 0) {
			cout << i << "\n";
		}
	}
	return 0;
}