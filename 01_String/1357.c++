#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int Rev(string num) {
	reverse(num.begin(), num.end());
	int save = stoi(num);
	return save;
}

int main() {
	string a, b;
	cin >> a >> b;
	int result = Rev(a) + Rev(b);
	cout << Rev(to_string(result));
	return 0;
}

// stoi,to_string ���� �� �����غ���!