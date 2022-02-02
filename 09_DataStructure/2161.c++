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

	int n;
	cin >> n;
	queue <int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	while (1) {
		if (q.size() == 1) {
			cout << q.front();
			break;
		}
		cout << q.front() << " ";
		q.pop();
		int x = q.front();
		q.pop();
		q.push(x);
	}
	return 0;
}