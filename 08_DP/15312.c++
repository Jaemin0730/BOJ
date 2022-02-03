#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int alp(char c) {
	int alp[26] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };

	return alp[c - 'A'];
}

void dp(vector <int> v) {
	if (v.size() == 2) {
		cout << v[0] << v[1];
		return;
	}

	vector <int> vt;
	for (int i = 1; i < v.size(); i++) {
		vt.push_back((v[i - 1] + v[i]) % 10);
	}
	dp(vt);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string a, b;
	cin >> a >> b;

	vector <int> v;
	for (int i = 0; i < a.length(); i++) {
		int A = alp(a[i]);
		int B = alp(b[i]);
		v.push_back(A);
		v.push_back(B);
	}

	dp(v);
	return 0;
}