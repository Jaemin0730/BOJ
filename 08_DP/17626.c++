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

	int dp[50001];
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; i++) {
		int temp = 50000;
		for (int j = 1; j * j <= i; j++) {
			temp = min(temp, dp[i - j * j] + 1);
		}
		dp[i] = temp;
	}
	cout << dp[n];
	return 0;
}