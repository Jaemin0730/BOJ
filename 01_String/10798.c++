#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <string>
using namespace std;

int main() {
	string word[5];

	for (int i = 0; i < 5; i++) {
		cin >> word[i];
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (i < word[j].length()) {
				cout << word[j][i];
			}
		}
	}

	return 0;
}