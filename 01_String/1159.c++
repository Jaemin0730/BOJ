#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	int alp[26] = { 0, };
	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;
		alp[word[0] - 'a']++;
	}

	int drop = 26;
	int max = 0;
	for (int i = 0; i < 26; i++) {
		char player = ' ';
		if (alp[i] >= 5) {
			player = i + 'a';
			cout << player;
		}
		else {
			drop--;
		}
	}

	if (drop == 0) {
		cout << "PREDAJA";
	}
	return 0;
}