#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

void f(int n) {
	if (n == 0) return;
	f(n - 1);
	cout << n << '\n';
}

int main() {
	int n;
	cin >> n;
	f(n);
	return 0;
}