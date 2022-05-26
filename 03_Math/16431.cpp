#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define pr pair<int, int>

int main(void)
{
    u;
    int bx, by;
	int dx, dy;
	int jx, jy;
	int countB;
	int countD;
	cin >> bx >> by;
	cin >> dx >> dy;
	cin >> jx >> jy;
	countB = max(abs(jx - bx), abs(jy - by));
	countD = abs(jx - dx) + abs(jy - dy);
	if (countB < countD) {
		cout << "bessie" << "\n";
	}
	else if (countB > countD) {
		cout << "daisy" << "\n";
	}
	else {
		cout << "tie" << "\n";
	}
}