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

	int x = n - 1;
	int y = 1;

	for (int j = 1; j <= x; j++) {
		cout << " ";
	}
	cout << "*" << "\n";
	x--;

	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= x; j++) {
			cout << " ";
		}
		x--;
		cout << "*";
		for (int j = 0; j < y; j++) {
			cout << " ";
		}
		y += 2;
		cout << "*" << "\n";
	}
	return 0;
}