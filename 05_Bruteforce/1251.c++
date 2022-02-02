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

	vector <string> v;

	for (int i = 1; i < s.length(); i++) {
		for (int j = i + 1; j < s.length(); j++) {
			string a = s.substr(0, i);
			string b = s.substr(i, j - i);
			string c = s.substr(j);

			reverse(a.begin(), a.end());
			reverse(b.begin(), b.end());
			reverse(c.begin(), c.end());

			v.push_back(a + b + c);
		}
	}

	sort(v.begin(), v.end());
	cout << v[0];
	return 0;
}