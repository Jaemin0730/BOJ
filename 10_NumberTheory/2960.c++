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

	int n, k;
	cin >> n >> k;
	
	int x = 0;	// k랑 비교할 숫자!! 중요함
	int list[1003];
	for (int i = 2; i <= n; i++) {
		list[i] = i;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 1; i * j <= n; j++) {
			// cout << list[i * j] << "\n";
			if (list[i * j] == -1) {
				continue;
			}
			list[i * j] = -1;
			// cout << list[i * j] << "\n";
			x++;
			if (x == k) {
				cout << i * j;
				break;
			}
		}
	}
	return 0;
}