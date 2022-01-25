#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int list1[3];
	int list2[3];

	for (int i = 0; i < 3; i++) {
		int x;
		int y;
		cin >> x >> y;
		list1[i] = x;
		list2[i] = y;
	}

	if (list1[0] == list1[1]) {
		cout << list1[2] << " ";
	}
	else if (list1[0] == list1[2]) {
		cout << list1[1] << " ";
	}
	else {
		cout << list1[0] << " ";
	}

	if (list2[0] == list2[1]) {
		cout << list2[2] << " ";
	}
	else if (list2[0] == list2[2]) {
		cout << list2[1] << " ";
	}
	else {
		cout << list2[0] << " ";
	}
		
	return 0;
}