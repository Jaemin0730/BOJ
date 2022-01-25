#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	string word;
	cin >> word;

	string save;
	save = word;

	for (int i = 1; i < n; i++) {
		string word;
		cin >> word;

		for (int j = 0; j < save.length(); j++) {
			if (save[j] != word[j]) {
				save[j] = '?';
			}
		}
	}
	cout << save;
	return 0;
}