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
	// 우선순위 큐 사용 -> 오름차순 순서대로!!
	// greater 사용 안하면 내림차순이 기본ㅎㅎ

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