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
	/*
	* �ؿ��� ���� ȥ�� �õ��غ� �ڵ����� ���ФФ�
	* ���߿� �� �����ؼ� ���� �������� �м��غ���!
	
	vector <char> v;
	stack <int> st;
	queue <int> q;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		q.push(num);
	}

	int i = 1;
	while(q.size()) {
		if (q.front() == st.top()) {
			v.push_back('-');
			q.pop();
			st.pop();
		}
		else if (i <= q.front()) {
			// ���� �̺κп��� �������� �Ф�
			st.push(i);
			i++;
			v.push_back('+');
			
		}
		else {
			cout << "NO";
			return;
		}
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
	*/

	vector <char> v;
	stack <int> st;

	int n;
	cin >> n;

	int count = 1;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		while (count <= num) {
			st.push(count);
			count++;
			v.push_back('+');
		}

		if (st.top() == num) {
			st.pop();
			v.push_back('-');
		}
		else {
			cout << "NO";
			return 0;
		}
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
	return 0;
}