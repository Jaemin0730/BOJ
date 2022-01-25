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
	int blank = 2 * (n - 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < star; j++) {
			cout << "*";
		}
		for (int j = blank; j > 0; j--) {
			cout << " ";
		}
		for (int j = 0; j < star; j++) {
			cout << "*";
		}
		star++;
		blank -= 2;
		cout << "\n";
	}
	
	star = n - 1;
	blank = 2;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < star; j++) {
			cout << "*";
		}
		for (int j = blank; j > 0; j--) {
			cout << " ";
		}
		for (int j = 0; j < star; j++) {
			cout << "*";
		}
		star--;
		blank += 2;
		cout << "\n";
	}
	return 0;
}