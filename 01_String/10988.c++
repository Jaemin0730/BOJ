#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <string>
using namespace std;

int main() {
	string word;
	cin >> word;

	int len = word.length();
	int type = 0;
	for (int i = 0; i < len; i++) {
		if (word[i] == word[len - 1 - i]) {
			type = 1;
		}
		else {
			type = 0;
			break;
		}
	}

	if (type == 1) {
		cout << "1";
	}
	else {
		cout << "0";
	}
	return 0;
}