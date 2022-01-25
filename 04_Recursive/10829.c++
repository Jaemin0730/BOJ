#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

void crr(long long int n) {
	//cout << n % 2;
	if (n != 1) {
		crr(n / 2);
	}
	else {
		cout << n % 2;
		return;
	}
	cout << n % 2;
}

int main() {
	long long int n;
	cin >> n;
	crr(n);
	return 0;
}