#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*
	int n, m;
	cin >> n >> m;
	vector <string> v1;
	vector <string> v2;
	vector <string> v3;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		v1.push_back(s);
	}

	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		v2.push_back(s);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (v1[i] == v2[j]) {
				v3.push_back(v1[i]);
			}
		}
	}

	cout << v3.size() << "\n";
	sort(v3.begin(), v3.end());
	for (int i = 0; i < v3.size(); i++) {
		cout << v3[i] << "\n";
	}
	*/

	int n, m;
	cin >> n >> m;
	map <string, int> mp;
	vector <string> v;

	for (int i = 0; i < n + m; i++) {
		string s;
		cin >> s;
		mp[s]++;
		if (mp[s] > 1) {
			v.push_back(s);
		}
	}
	sort(v.begin(), v.end());
	cout << v.size() << "\n";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
	return 0;
}