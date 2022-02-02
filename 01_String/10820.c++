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

	while (getline(cin, s)) {
		int list[4] = { 0, };
		for (int i = 0; i < s.length(); i++) {
			if ('a' <= s[i] && s[i] <= 'z') {
				list[0]++;
			}
			else if ('A' <= s[i] && s[i] <= 'Z') {
				list[1]++;
			}
			else if ('0' <= s[i] && s[i] <= '9') {
				list[2]++;
			}
			else if (s[i] == ' ') {
				list[3]++;
			}
		}

		for (int j = 0; j < 4; j++) {
			cout << list[j] << " ";
		}
		cout << "\n";
	}	

	return 0;
}