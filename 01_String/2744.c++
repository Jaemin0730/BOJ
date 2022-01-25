#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	string word;
	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		if (97 <= word[i] && word[i] <= 122) {
			word[i] -= 32;
		}
		else {
			word[i] += 32;
		}
		cout << word[i];
	}
	return 0;
}