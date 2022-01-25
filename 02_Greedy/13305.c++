#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

long long int d[100000];	// �Ÿ� ����
long long int s[100000];	// ��ġ ����

int main() {
	int n;
	cin >> n;

	long long int sum = 0;

	for (int i = 0; i < n - 1; i++) {
		cin >> d[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	long long int now = s[0];	//���� ���� �����ִ� ��ġ ����!
	sum = now * d[0];

	for (int i = 1; i < n - 1; i++) {
		if (now < s[i]) {
			sum += now * d[i];
		}
		else {// now>=s[i]
			now = s[i];
			sum += now * d[i];
		}
	}
	cout << sum;

	return 0;
}