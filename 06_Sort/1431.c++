#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

bool compare(string s1, string s2) {
	if (s1.length() != s2.length()) {
		return s1.length() < s2.length();
	}
	else {
		int num1 = 0;
		int num2 = 0;
		for (int i = 0; i < s1.size(); i++) {
			if ('0' <= s1[i] && s1[i] <= '9') {
				num1 += (int)(s1[i] - '0');
			}
		}
		for (int i = 0; i < s2.size(); i++) {
			if ('0' <= s2[i] && s2[i] <= '9') {
				num2 += (int)(s2[i] - '0');
			}
		}

		if (num1 != num2) {
			return num1 < num2;
		}
		else {
			return s1 < s2;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	vector <string> v;
	for (int i = 0; i < t; i++) {
		string s;
		cin >> s;
		v.push_back(s);
	}	

	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
	return 0;
}