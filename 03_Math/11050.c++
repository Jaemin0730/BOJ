#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int sum1 = 1, sum2 = 1, sum3 = 1;
	for (int i = n; i > 0; i--) {
		sum1 *= i;
	}
	for (int i = k; i > 0; i--) {
		sum2 *= i;
	}
	for (int i = n-k; i > 0; i--) {
		sum3 *= i;
	}

	int result = 0;
	result = sum1 / (sum2 * sum3);
	cout << result;
	return 0;
}