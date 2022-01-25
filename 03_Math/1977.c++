#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;

	int sum = 0;
	int min;
	int pass = 1;

	for (int i = m; i <= n; i++) {
		int count = 0;
		
		for (int j = 2; j < i; j++) {
			if (i == j*j) {
				count++;
			}
		}

		//cout << count << "\n";
		if (count == 1) {
			sum += i;
			
			if (pass == 0) {
				continue;
			}
			else {
				min = i;
				pass = 0;
			}
		}

	}

	if (m == 1) {
		sum += 1;
		min = 1;
	}

	if (sum == 0) {
		cout << "-1";
	}
	else {
		cout << sum << "\n";
		cout << min << "\n";
	}
	
	return 0;
}