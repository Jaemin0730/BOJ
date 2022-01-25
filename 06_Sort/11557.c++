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
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		vector <pair<int, string>> v;
		string s;
		int l;
		for (int j = 0; j < n; j++) {
			cin >> s >> l;
			v.push_back(make_pair(l, s));
		}
		sort(v.begin(), v.end(), greater<>());
		cout << v[0].second;
		cout << "\n";
	}
	
	return 0;
}