#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	int temp = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			cout << " ";
		}
		// -----------------------------------------

		if (i == 0 || i == n - 1) {
			for (int j = 1; j <= 2 * i + 1; j++) {
				cout << "*";
			}
		}

		else {
			cout << "*";
			for (int j = 1; j <= temp; j++) {
				cout << " ";
			}
			cout << "*";
			temp += 2;
		}

		cout << "\n";
	}
	return 0;
}