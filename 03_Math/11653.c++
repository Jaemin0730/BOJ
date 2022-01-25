#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	int num = 2;
	while (n > 1) {
		if (n % num == 0) {
			cout << num << "\n";
			n /= num;
		}
		else {
			num++;
		}
	}
	return 0;
}