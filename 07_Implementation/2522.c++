#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	int blank = n - 1;
	int star = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < blank; j++) {
			cout << " ";
		}
		for (int j = 0; j < star; j++) {
			cout << "*";
		}
		blank--;
		star++;
		cout << "\n";
	}

	star = n - 1;
	blank = 1;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < blank; j++) {
			cout << " ";
		}
		for (int j = 0; j < star; j++) {
			cout << "*";
		}
		blank++;
		star--;
		cout << "\n";
	}
	return 0;
}