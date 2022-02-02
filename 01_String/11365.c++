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

	while (1) {
		string s;
		getline(cin, s);

		if (s == "END") break;

		for (int i = s.length() - 1; i >= 0; i--) {
			cout << s[i];
		}
		cout << "\n";
	}
	return 0;
}