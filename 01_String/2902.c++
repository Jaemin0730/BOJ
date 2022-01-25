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
		if ('A' <= word[i] && word[i] <= 'Z') {
			cout << word[i];
		}
	}

	return 0;
}