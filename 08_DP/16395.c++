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

	int dp[31][31];
	int n, k;
	cin >> n >> k;
	
	for (int i = 1; i <= 30; i++) {
		dp[i][1] = 1;
		dp[i][i] = 1;
	}

	for (int i = 3; i <= 30; i++) {
		for (int j = 2; j < i; j++) {
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
		}
	}
	cout << dp[n][k];
	
	return 0;
}