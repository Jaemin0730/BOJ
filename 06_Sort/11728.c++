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

	vector <int> v;
	int n, m;
	cin >> n >> m;
	int num;

	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	for (int i = 0; i < m; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n + m; i++) {
		cout << v[i] << " ";
	}
	return 0;
}