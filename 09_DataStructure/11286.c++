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

	priority_queue< pair<int, int>, vector < pair<int, int> >, greater< pair<int, int> > > pq;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		
		if (x == 0) {
			if (pq.empty()) {
				cout << "0" << "\n";
			}
			else {
				cout << pq.top().second << "\n";
				pq.pop();
			}
		}
		else {
			if (x > 0) {
				pq.push({ x,x });
			}
			else if(x < 0) {
				int y = x * (-1);
				pq.push({ y,x });
			}
		}
	}
	return 0; 
}