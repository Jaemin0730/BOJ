#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int count = 0;
		string side;
		cin >> side;
		for (int j = 0; j < side.length(); j++) {
			if (side[j] == '(') {
				count++;
			}
			else {
				count--;
			}

			if (count < 0) {
				break;
			}
		}

		if (count == 0) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
	return 0;
}