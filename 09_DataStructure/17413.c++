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
	getline(cin, s);
	s += ' ';

	stack <char> st;
	string output = "";

	int i = 0;
	int len = s.length();
	
	while (i <= len) {
		if (s[i] == '<') {
			if (!st.empty()) {
				while (!st.empty()) {
					output += st.top();
					st.pop();
				}
				output += '<';
				i++;
			}

			while (s[i] != '>') {
				output += s[i++];
			}
			output += s[i++];
		}
		else {
			st.push(s[i]);
			if (s[i] == ' ') {
				st.pop();
				while (!st.empty()) {
					output += st.top();
					st.pop();
				}
				output += ' ';
			}
			i++;
		}
	}

	for (int i = 0; i < len; i++) {
		cout << output[i];
	}
	return 0;
}