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

	vector <pair<int, int>> pv;
	vector <int> v;

	for (int i = 1; i <= 8; i++) {
		int n;
		cin >> n;
		// a:°ª b:¼ø¼­
		pv.push_back(make_pair(n, i));
	}

	sort(pv.begin(), pv.end(), greater<>());
	
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		v.push_back(pv[i].second);
		sum += pv[i].first;
	}
	
	cout << sum << "\n";
	sort(v.begin(), v.end());
	for (int i = 0; i < 5; i++) {
		cout << v[i] << " ";
	}
	return 0;
}

/*
	for (int i = 0; i < pv.size(); i++) {
		cout << pv[i].first << "\n";
	}
*/