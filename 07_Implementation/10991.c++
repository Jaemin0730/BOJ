#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

/*
void star(int n) {
	if (n == 0) return;
	star(n - 1);
	for (int i = 0; i < 2 * n - 1; i++) {
		if (i % 2 == 0) {
			cout << "*";
		}
		else {
			cout << " ";
		}
	}
	cout << "\n";
}

int main() {
	int n;
	cin >> n;
	star(n);
	return 0;
}
*/

int main() {
	int n;
	cin >> n;
	
	int star = 1;
	for (int t = 0; t < n; t++) {
		for (int k = 0; k < n - 1 - t; k++) {
			cout << " ";
		}

		for (int i = 0; i < star; i++) {
			if (i % 2 == 0) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		star += 2;
		cout << "\n";
	}
	return 0;
}