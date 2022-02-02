#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, d;
	cin >> n >> d;

	int count = 0;
	/*
	for (int i = 1; i <= n; i++) {
		string num = to_string(i);
		for (int j = 0; j < num.length(); i++) {
			if (num[j] == d) {
				count++;
			}
		}
	}
	*/

	for (int i = 1; i <= n; i++) {
		int save = i;
		while (save) {
			if (save % 10 == d) {
				count++;
			}
			save /= 10;
		}
	}
	cout << count;
	return 0;
}