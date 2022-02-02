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
			// ��� ����������!! x,y �� �����Ѱ� ��������!
			q.pop();
			// �����Ѱ� ���� �� �� ���� ������ ���� ��
			// else�϶� push������!!!! 
			// �׸��� if�϶��� ���� �߿��� ���!!!!

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