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
		// n�� �ݺ��ؾߵ�!
		for (int i = 0; i < 2; i++) {
			if (i == 0) {// ù��° ��
				for (int j = 0; j < n; j++) {
					if (j % 2 == 0) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
			}

			else {	//(i == 1) - �ι�° ��
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