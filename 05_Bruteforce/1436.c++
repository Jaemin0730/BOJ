#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;			// �ִ� ���ڤ�
	cin >> n;

	int name = 0;	// �̸� ���߱�!
	int count = 0;	// ���� ī��Ʈ
	int temp;		// �� ����

	while (count != n) {
		name++;
		// ���ڰ� 1�� Ŀ���鼭 �ؿ� while���� �־ Ȯ���غ���
		// ���� ���ϴ� ���ڰ� name�� �´�����!!
		temp = name;

		while (temp != 0) {
			if (temp % 1000 == 666) {
				count++;
				break;
			}
			else {
				temp /= 10;
			}
		}
	}
	cout << name;

	return 0;
}