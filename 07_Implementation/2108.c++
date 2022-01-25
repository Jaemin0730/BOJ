#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count[8001] = { 0, };

	vector <int> list;
	double sum = 0;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		list.push_back(num);
		sum += num;
		count[num + 4000]++;
	}

	double average;
	average = (double)sum / n;
	average = round(average);
	// �ݿø� ���� ���ִ� round(��)!!

	int middle;
	sort(list.begin(), list.end());
	middle = list[list.size() / 2];

	int temp;
	int max = 0;

	for (int i = 0; i < 8001; i++) {
		if (count[i] > max) {
			max = count[i];
			temp = i;
		}
	}	// ���⼭ �ֺ��� ���ϱ���

	for (int i = temp + 1; i < 8001; i++) {
		if (count[i] == max) {
			// �ֺ��̶� ������, ���ڰ� �ι�°�� ū ��!
			// ���࿡ �ֺ��� �ϳ��� ������ �� ����!
			temp = i;
			break;
		}
	}

	int diff;
	diff = list[n - 1] - list[0];

	cout << average << "\n";
	cout << middle << "\n";
	cout << temp - 4000 << "\n";
	cout << diff << "\n";
	return 0;
}