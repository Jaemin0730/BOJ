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

	int count = 10;
	for (int i = 1; i < word.length(); i++) {
		if (word[i - 1] == word[i]) {
			count += 5;
		}
		else {
			count += 10;
		}
	}
	cout << count;
	return 0;
}