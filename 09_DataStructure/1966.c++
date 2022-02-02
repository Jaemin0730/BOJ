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

	int t;
	cin >> t;
	for (int k = 0; k < t; k++) {
		int n, m;
		cin >> n >> m;
		int num;
		queue <pair<int,int>> q;
		priority_queue <int> pq;
		for (int i = 0; i < n; i++) {
			cin >> num;
			q.push(make_pair(i, num));
			// q.front(). first -> i, second -> num!
			pq.push(num);
		}

		int count = 0;
		while (!q.empty()) {
			int x = q.front().first;
			int y = q.front().second;
			// 계속 갱신해주자!! x,y 값 저장한거 잊지말기!
			q.pop();
			// 저장한거 갱신 후 맨 앞의 값들은 제거 후
			// else일때 push해주자!!!! 
			// 그리고 if일때가 가장 중요해 잼아!!!!

			if (y == pq.top()) {
				pq.pop();
				count++;
				if (x == m) {
					cout << count << "\n";
					break;
				}
			}
			else {
				q.push(make_pair(x, y));
			}
		}

	}
	return 0;
}