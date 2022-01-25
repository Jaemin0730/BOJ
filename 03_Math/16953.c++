#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	long long int a, b;
	cin >> a >> b;

	int count = 0;
	while (1) {
		if (b % 2 == 0) {
			b /= 2;
			count++;
		}
		else if (b % 2 == 1) {
			if ((b - 1) % 10 == 0) {
				b = (b - 1) / 10;
			}
			else {
				cout << "-1";
				break;
			}
			count++;
		}

		if (b == a) {
			cout << count + 1;
			break;
		}
		else if (b < a) {
			cout << "-1";
			break;
		}
	}
	return 0;
}