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

	long long int DP[81];
	DP[1] = 4;
	DP[2] = 6;

	for (int i = 3; i <= 80; i++) {
		DP[i] = DP[i - 1] + DP[i - 2];
	}

	cout << DP[n];
	return 0;
}