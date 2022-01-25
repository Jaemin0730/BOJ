#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n;
	int x1, x2, y1, y2, r1, r2;
	double distance;
	double minus, plus;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		plus = sqrt((r1 + r2) * (r1 + r2));
		minus = sqrt((r1 - r2) * (r1 - r2));

		if (distance == 0 && r1 == r2) {
			cout << "-1" << "\n";
		}
		else if (distance == plus || distance == minus) {
			cout << "1" << "\n";
		}
		else if (distance < plus && minus < distance) {
			cout << "2" << "\n";
		}
		else {
			cout << "0" << "\n";
		}
	}
	return 0;
}