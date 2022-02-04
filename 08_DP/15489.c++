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
	int r, c, w;
	cin >> r >> c >> w;

	dp[1][1] = 1;
	dp[2][1] = 1;
	dp[2][2] = 1;

	for (int i = 3; i < r + w; i++) {
		dp[i][1] = 1;
		for (int j = 2; j < i; j++) {
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
		}
		dp[i][i] = 1;
	}

	int sum = 0;
	int n = 1;
	for (int i = r; i < r + w; i++) {
		for (int j = 0; j < n; j++) {
			cout << dp[i][c + j] << "\n";
			sum += dp[i][c + j];
		}
		n++;
	}
	cout << sum;
	return 0;
}