#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int e, s, m;
	cin >> e >> s >> m;

	int y = 1;
	while (1) {
		if ((y - e) % 15 == 0 && (y - s) % 28 == 0 && (y - m) % 19 == 0) {
			break;
		}
		y++;
	}
	cout << y;
	return 0;
}