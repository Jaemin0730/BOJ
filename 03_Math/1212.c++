#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <string>
using namespace std;

/*
void change(char n) {
	if (n == '0') {
		cout << "000";
	}
	else if (n == '1') {
		cout << "001";
	}
	else if (n == '2') {
		cout << "010";
	}
	else if (n == '3') {
		cout << "011";
	}
	else if (n == '4') {
		cout << "100";
	}
	else if (n == '5') {
		cout << "101";
	}
	else if (n == '6') {
		cout << "110";
	}
	else if (n == '7') {
		cout << "111";
	}
}


int main() {
	string num;
	cin >> num;

	if (num[0] != 0) {
		if (num[0] == '1') {
			cout << "1";
		}
		else if (num[0] == '2') {
			cout << "10";
		}
		else if (num[0] == '3') {
			cout << "11";
		}
		else {
			change(num[0]);
		}
		// ------------------------------------
		for (int i = 1; i < num.length(); i++) {
			change(num[i]);
		}
	}

	else {
		cout << 0;
	}

	return 0;
}
*/

int main() {
	string num;
	cin >> num;
	for (int i = 0; i < num.size(); i++)
	{
		if (num[i] == '0')
		{
			if (i == 0)
				cout << '0';
			else
				cout << "000";
		}
		else if (num[i] == '1')
		{
			if (i == 0)
				cout << "1";
			else
				cout << "001";
		}
		else if (num[i] == '2')
		{
			if (i == 0)
				cout << "10";
			else
				cout << "010";

		}
		else if (num[i] == '3')
		{
			if (i == 0)
				cout << "11";
			else
				cout << "011";
		}
		else if (num[i] == '4')
			cout << "100";
		else if (num[i] == '5')
			cout << "101";
		else if (num[i] == '6')
			cout << "110";
		else if (num[i] == '7')
			cout << "111";
	}
}
