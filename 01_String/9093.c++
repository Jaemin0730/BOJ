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
	cin.ignore();

	while (t--) {
		string s;
		getline(cin, s);
		s += '\n';

		stack <char> st;

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == ' ' || s[i] == '\n') {
				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}
				cout << ' ';
			}
			else if (s[i] != ' ') {
				st.push(s[i]);
			}
		}
		cout << "\n";
	}
	return 0;
}