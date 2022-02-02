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

	int n, f;
	cin >> n >> f;
	n -= n % 100;
	
	for (int i = n;; i++) {
		if (i % f == 0) {
			if (i % 100 < 10) {
				cout << "0";
			}
			cout << i % 100;
			break;
		}
	}
	return 0;
}