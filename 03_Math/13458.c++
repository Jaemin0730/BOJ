#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	long long int list[1000001];
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		list[i] = num;
	}

	int a, b;
	// a: 총 감독관 응시자
	// b: 보조감독관 응시자
	cin >> a >> b;
	
	long long int count = 0;
	for (int i = 0; i < n; i++) {
		list[i] -= a;
		count++;
		// 누적해주는게 핵심임ㅎㅎ
		if (list[i] > 0) {
		// 이 if문 안 써줘서ㅠㅠ 틀렸었숨당 .....
			if (list[i] % b == 0) {
				count += (list[i] / b);
			}
			else {
				count += list[i] / b + 1;
			}
		}
	}
	cout << count;
	return 0;
}