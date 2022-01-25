#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int alp[26] = { 0, };
	string word;
	cin >> word;

	for (int i = 0; i < word.size(); i++) {
		alp[word[i] - 97]++;
		// a : 97이기 때문!
		// 예시) a - 97 = 0
	}

	for (int i = 0; i < 26; i++) {
		cout << alp[i] << " ";
	}
	return 0;
}