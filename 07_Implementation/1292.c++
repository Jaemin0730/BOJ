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

	vector <int> v(10000);
	int a, b;
	cin >> a >> b;
	int x = 1;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 1; j <= i; j++) {
			if (x == 1001) break;
			v[x] = i;
			x++;
		}
	}

	int count = 0;
	for (int i = a; i <= b; i++) {
		//cout << v[i];
		count += v[i];
	}
	cout << count;
	return 0;
}