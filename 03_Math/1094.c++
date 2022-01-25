#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

#define start 64
using namespace std;

int main() {
	int x;
	cin >> x;

	int count = 0;
	while (x > 0) {
		if (x - 64 >= 0) {
			x -= 64;
			count++;
		}
		else if (x - 32 >= 0) {
			x -= 32;
			count++;
		}
		else if (x - 16 >= 0) {
			x -= 16;
			count++;
		}
		else if (x - 8 >= 0) {
			x -= 8;
			count++;
		}
		else if (x - 4 >= 0) {
			x -= 4;
			count++;
		}
		else if (x - 2 >= 0) {
			x -= 2;
			count++;
		}
		else if (x - 1 >= 0) {
			x -= 1;
			count++;
		}
	}
	cout << count;
	return 0;
}