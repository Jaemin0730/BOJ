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

	int n;
	cin >> n;

	double dp[10001];
	double save[10001];
	double d = 0;

	for (int i = 0; i < n; i++) {
		double num;
		cin >> num;
		save[i] = num;
	}

	dp[0] = save[0];
	for (int i = 1; i < n; i++) {
		dp[i] = max(save[i], dp[i - 1] * save[i]);
		d = max(d, dp[i]);
	}

	cout << fixed;
	cout.precision(3);
	cout << d;
	return 0;
}