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

	long long int dp[1000001];
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
	}

	//int result = dp[n] % 1000000007;
	cout << dp[n];
	return 0;
}