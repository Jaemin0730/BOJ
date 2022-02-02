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

	vector<int>v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	vector<int>vi;
	for (int i = n; i > 0; i--) {
		vi.push_back(i * v[n - i]);
	}

	cout << *max_element(vi.begin(), vi.end());
	return 0;
}