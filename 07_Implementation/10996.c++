#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int k = 0; k < n; k++) {
		// n번 반복해야돼!
		for (int i = 0; i < 2; i++) {
			if (i == 0) {// 첫번째 줄
				for (int j = 0; j < n; j++) {
					if (j % 2 == 0) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
			}

			else {	//(i == 1) - 두번째 줄
				for (int j = 0; j < n; j++) {
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
	}
	return 0;
}