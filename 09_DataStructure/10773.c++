#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	stack <int> list;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		if (num == 0) {
			list.pop();
		}
		else {
			list.push(num);
		}
	}

	int sum = 0;
	/*
	if (list.empty()) {
		cout << "0";
	}
	else {
		for (int i = 0; i < list.size(); i++) {
			sum += list.top();	// 남아있는 스택의 값들을 더해줌
			list.pop();			// 저장이 끝난 값들은 stack.pop()을 통해 제거해준다
		}
		cout << sum;
	}
	*/

	/*
	for (int i = 0; !list.empty(); i++) {
		sum += list.top();
		list.pop();
	}
	cout << sum;
	*/

	while (!list.empty()) {
		sum += list.top();
		list.pop();
	}
	cout << sum;

	return 0;
}