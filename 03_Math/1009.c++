#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		int result = 1;
		for (int j = 0; j < b; j++) {
			result *= a;
			result = result % 10;
		}
		if (result == 0) {
			cout << "10\n";
		}
		else {
			cout << result << "\n";
		}
	}
	return 0;
}