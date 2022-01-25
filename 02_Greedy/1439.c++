#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	string word;
	cin >> word;

	int count = 0;
	for (int i = 0; i < word.length(); i++) {
		if (word[i] != word[i + 1]) {
			count++;
		}
	}
	cout << count / 2;
	return 0;
}