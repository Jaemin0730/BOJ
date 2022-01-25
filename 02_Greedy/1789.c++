#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	long long int s;
	cin >> s;

	long long int n = 1;
	long long int sum = 0;
	while (1) {
		if (s - sum >= n) {
			sum += n;
			n++;
		}
		else {
			cout << n - 1;
			break;
		}
	}
	return 0;
}