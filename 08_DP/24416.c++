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

	int dp = n - 2;
	int re[41];

	int i;
	re[1] = 1;
	re[2] = 1;
	for (i = 3; i <= 40; i++) {
		re[i] = re[i - 1] + re[i - 2];
	}

	cout << re[n] << " " << dp;
	return 0;
}