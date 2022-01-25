#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	double ucl;
	double texi;
	ucl = n * n * 3.1415926535897932;
	texi = n * n * 2;

	cout << fixed;
	cout.precision(6);
	cout << ucl << "\n";
	cout << texi << "\n";
	return 0;
}