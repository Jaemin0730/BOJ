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
	// a: �� ������ ������
	// b: ���������� ������
	cin >> a >> b;
	
	long long int count = 0;
	for (int i = 0; i < n; i++) {
		list[i] -= a;
		count++;
		// �������ִ°� �ٽ��Ӥ���
		if (list[i] > 0) {
		// �� if�� �� ���༭�Ф� Ʋ�Ⱦ����� .....
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