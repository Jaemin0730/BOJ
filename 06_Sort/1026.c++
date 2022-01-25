#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector <int> a;
	vector <int> b;
	for (int i = 0; i < n; i++) {
		int anum;
		cin >> anum;
		a.push_back(anum);
	}
	for (int i = 0; i < n; i++) {
		int bnum;
		cin >> bnum;
		b.push_back(bnum);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	// b는 오름차순으로 한번에 할 수 있는지 한번 살펴보자!

	int result = 0;
	for (int i = 0; i < n; i++) {
		result += a[i] * b[(n - 1) - i];
	}
	cout << result;
	
	return 0;
}