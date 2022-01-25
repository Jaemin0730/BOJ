#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int num;
	cin >> num;


	for (int i = 0; i < num; i++) {
		int n;
		cin >> n;

		int money[4] = { 0, };

		while (n > 0) {
			if (n - 25 >= 0) {
				n -= 25;
				money[0]++;
			}
			else if (n - 10 >= 0) {
				n -= 10;
				money[1]++;
			}
			else if (n - 5 >= 0) {
				n -= 5;
				money[2]++;
			}
			else if (n - 1 >= 0) {
				n -= 1;
				money[3]++;
			}
		}

		for (int i = 0; i < 4; i++) {
			cout << money[i] << " ";
		}
	}
	return 0;
}