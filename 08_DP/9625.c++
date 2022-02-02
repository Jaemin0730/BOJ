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

	int a[50];
	int b[50];

	a[1] = 0;
	a[2] = 1;
	b[1] = 1;
	b[2] = 1;

	int i;
	for (i = 3; i <= 45; i++) {
		a[i] = a[i - 1] + a[i - 2];
		b[i] = b[i - 1] + b[i - 2];
	}
	
	int n;
	cin >> n;
	cout << a[n] << " " << b[n];

	return 0;
}