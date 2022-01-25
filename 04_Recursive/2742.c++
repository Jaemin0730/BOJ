#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

void circle(int n) {
	if (n == 1) {
		cout << n;
		return;
	}
	else {
		cout << n << "\n";
		circle(n - 1);
	}
}

int main() {
	int n;
	cin >> n;
	circle(n);
	return 0;
}