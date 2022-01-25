#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		int n, m;
		cin >> n >> m;
		long long int result = 1;
		int a;
		int b;

		if (m - n > n) {
			a = m - n;
			b = n;
		}
		else {
			a = n;
			b = m - n;
		}

		for (int j = m; j > a; j--) {
			result *= j;
		}

		for (int j = 1; j <= b ; j++) {
			result /= j;
		}

		cout << result << "\n";
	}
	return 0;
}