#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;
	int arr[10] = { 0, };
	//int num[10] = { 0,1,2,3,4,5,6,7,8,9 };

	for (int i = 0; i < s.length(); i++) {
		arr[s[i] - '0']++;
	}
	int half = (arr[6] + arr[9] + 1) / 2;
	arr[6] = half;
	arr[9] = half;

	int max = arr[0];
	for (int i = 0; i < 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	cout << max;
	return 0;
}