#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> list(n);
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		list[i] = num;
	}
	sort(list.begin(),list.end());
	int result;
	result = list[0] * list[n - 1];
	cout << result;

	return 0;
}