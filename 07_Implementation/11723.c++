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
	cout.tie(NULL);

	int m, n;
	int bit = 0;
	string s;

	cin >> m;
	while (m--) {
		cin >> s;
		
		if (s == "add") {
			cin >> n;
			bit |= (1 << n);
		}
		else if (s == "remove") {
			cin >> n;
			bit &= ~(1 << n);
		}
		else if (s == "check") {
			cin >> n;
			if (bit & (1 << n)) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (s == "toggle") {
			cin >> n;
			bit ^= (1 << n);
		}
		else if (s == "all") {
			bit = (1 << 21) - 1;
		}
		else if (s == "empty") {
			bit = 0;
		}
	}
	return 0;
}