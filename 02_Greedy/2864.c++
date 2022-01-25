#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <stdlib.h>
#include <string>
using namespace std;

void mmax(string a, string b) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '5') {
			a[i] = '6';
		}
	}
	for (int i = 0; i < a.length(); i++) {
		if (b[i] == '5') {
			b[i] = '6';
		}
	}

	int num1 = stoi(a);
	int num2 = stoi(b);
	cout << num1 + num2;
}

void mmin(string a, string b) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '6') {
			a[i] = '5';
		}
	}
	for (int i = 0; i < a.length(); i++) {
		if (b[i] == '6') {
			b[i] = '5';
		}
	}
	int num1 = stoi(a);
	int num2 = stoi(b);
	cout << num1 + num2;
}

int main() {
	string a, b;
	cin >> a >> b;

	mmin(a, b);
	cout << " ";
	mmax(a, b);
	return 0;
}