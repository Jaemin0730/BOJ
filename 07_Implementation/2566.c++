#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int k[10][10];
	int max = k[1][1];
	int x = 0;
	int y = 0;
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cin >> k[i][j];
			if (max <= k[i][j]) {
				max = k[i][j];
				x = i;
				y = j;
			}
		}
	}
	cout << max << "\n" << x << " " << y << "\n";
	return 0;
}