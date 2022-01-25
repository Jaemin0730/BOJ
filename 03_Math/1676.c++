#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	int count = 0;
	int num;
	for (int i = 1; i <= n; i++) {
		num = i;
		while (1) {
			if (num % 5 == 0) {
				num /= 5;
				count++;
			}
			else {
				break;
			}
		}
	}
	cout << count;
	return 0;
}