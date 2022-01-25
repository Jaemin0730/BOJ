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

		if (s == ".") {
			break;
		}

		stack <char> st;
		int tf = 0;
		// tf가 참일때 1 거짓일때 0;

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(' || s[i] == '[') {
				st.push(s[i]);
			}
			else if (s[i] == ')') {
				if (st.empty() || st.top() != '(') {
					tf = 1;
					break;
				}
				st.pop();
			}
			else if (s[i] == ']') {
				if (st.empty() || st.top() != '[') {
					tf = 1;
					break;
				}
				st.pop();
			}
		}
		if (tf == 1 || !st.empty()) {
			cout << "no" << "\n";
		}
		else {
			cout << "yes" << "\n";
		}

		
	}

	
	return 0;
}