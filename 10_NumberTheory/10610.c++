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

	string s;
	cin >> s;

	vector <char> v;
	long long int sum = 0;
	int tf = 0;

	for (int i = 0; i < s.length(); i++) {
		v.push_back(s[i]);
		sum += (int)(s[i] - '0');
		if (s[i] == '0') {
			tf = 1;
		}
	}

	if (sum % 3 != 0 || tf == 0) {
		cout << "-1";
	}
	else if (sum % 3 == 0 && tf == 1) {
		sort(v.begin(), v.end(), greater<>());
		for (int i = 0; i < v.size(); i++) {
			cout << v[i];
		}
	}

	return 0;
}