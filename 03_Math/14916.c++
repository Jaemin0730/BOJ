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

	int count = 0;

	/*
	while (n > 0) {
		if (n % 5 == 0) {
			cout << n / 5 + count;
			return 0;
		}
		
		count++;
		n -= 2;
	}
	cout << "-1";
	*/

	if (n % 5 % 2 == 0) {
		cout << n / 5 + n % 5 / 2;
	}
	else if (n / 5 == 0) {
		cout << "-1";
	}
	else {
		cout << n / 5 + (n % 5 + 5) / 2 - 1;
	}

	return 0;
}