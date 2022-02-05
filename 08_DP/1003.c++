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

	int dp[41][2];

	dp[0][0] = 1;
	dp[0][1] = 0;

	dp[1][0] = 0;
	dp[1][1] = 1;

	for (int i = 2; i <= 40; i++) {
		dp[i][0] = dp[i - 1][0] + dp[i - 2][0];
		dp[i][1] = dp[i - 1][1] + dp[i - 2][1];
	}

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;

		cout << dp[n][0] << " " << dp[n][1] << "\n";
	}
	return 0;
}