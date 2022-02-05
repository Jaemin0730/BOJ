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

	long long int t[36];
	t[0] = 1;
	
	for (int i = 1; i <= n; i++) {
		long long int temp = 0;
		for (int j = 0; j < i; j++) {
			temp += t[j] * t[i - 1 - j];
			//cout << t[j] * t[i - 1 - j] << "\n";
		}
		t[i] = temp;
	}
	cout << t[n];
	return 0;
}