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

	priority_queue<int, vector<int>, greater<int>> pq;
	// �켱���� ť ��� -> �������� �������!!
	// greater ��� ���ϸ� ���������� �⺻����

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int num;
		cin >> num;
		if (num == 0) {
			if (pq.empty()) {
				cout << "0" << "\n";
			}
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else {
			pq.push(num);
		}
	}
	return 0;
}