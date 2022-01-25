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
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < 2 * n; j++) {
				if (j % 2 == 0) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
		}
		else {
			for (int j = 0; j < 2 * n; j++) {
				if (j % 2 == 1) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
		}
		cout << "\n";
	}
	return 0;
}