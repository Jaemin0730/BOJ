#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++) {
		char c = s[i];
		if ('a' <= c && c <= 'z') {
			if (c - 'a' < 13) {
				c += 13;
			}
			else {
				c -= 13;
			}
		}
		else if ('A' <= c && c <= 'Z') {
			if (c - 'A' < 13) {
				c += 13;
			}
			else {
				c -= 13;
			}
		}
		s[i] = c;
	}
	cout << s << "\n";

	return 0;
}