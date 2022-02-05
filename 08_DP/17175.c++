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

	int dp[51];
	dp[0] = 1;
	dp[1] = 1;

	int n;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2] + 1) % 1000000007;
	}
	cout << dp[n];
	return 0;
}