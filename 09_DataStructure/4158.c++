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
	
	while (1) {
		int a, b;
		cin >> a >> b;

		if (a == 0 && b == 0) {
			break;
		}

		vector <int> v1;
		vector <int> v2;

		for (int i = 0; i < a; i++) {
			int num;
			cin >> num;
			v1.push_back(num);
		}
		for (int i = 0; i < b; i++) {
			int num;
			cin >> num;
			v2.push_back(num);
		}

		int count = 0;

		int x = 0;
		for (int i = 0; i < a; i++) {
			for (int j = x; j < b; j++) {
				if (v1[i] == v2[j]) {
					count++;
					x = j + 1;
					continue;
				}
			}
		}
		cout << count << "\n";
	}
	return 0;
}