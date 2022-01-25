#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	string num;

	while (1) {
		cin >> num;
		int count = 0;
		if (num == "0") {
			break;
		}
		else {
			for (int i = 0; i < num.length(); i++) {
				if (num[i] != num[(num.length() - 1) - i]) {
					count++;
				}
			}
			if (count > 0) {
				cout << "no" << "\n";
			}
			else {
				cout << "yes" << "\n";
			}
		}
	}
	return 0;
}