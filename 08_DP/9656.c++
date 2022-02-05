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
	if (n % 2 == 0) {
		cout << "SK";
	}
	else {
		cout << "CY";
	}
	return 0;
}