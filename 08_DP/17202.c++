#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

void DP (vector <int> v) {
	if (v.size() == 2) {
		cout << v[0] << v[1];
		return;
	}

	vector <int> vt;
	for (int i = 1; i < v.size(); i++) {
		vt.push_back((v[i - 1] + v[i]) % 10);
	}
	DP(vt);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string a, b;
	cin >> a >> b;
	vector <int> v;

	for (int i = 0; i < 8; i++) {
		v.push_back((int)a[i] - '0');
		v.push_back((int)b[i] - '0');
	}
	
	DP(v);
	return 0;
}