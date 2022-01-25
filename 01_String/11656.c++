#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	string word;
	cin >> word;

	string list[1000];
	for (int i = 0; i < word.length(); i++) {
		list[i] = word.substr(i, word.length());
	}
	sort(list, list + word.length());
	
	for (int i = 0; i < word.length(); i++) {
		cout << list[i] << "\n";
	}
	
	return 0;
}