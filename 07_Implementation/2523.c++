#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	int star = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < star; j++) {
			cout << "*";
		}
		star++;
		cout << "\n";
	}

	star -= 2;
	for (int i = 1; i < n; i++) {
		for (int j = star; j > 0; j--) {
			cout << "*";
		}
		star--;
		cout << "\n";
	}

	return 0;
}