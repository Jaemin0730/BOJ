#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <tuple>
using namespace std;

bool cp(tuple<int, int, int , string>t1, tuple<int, int, int, string>t2) {
	if (get<0>(t1) != get<0>(t2)) {
		return get<0>(t1) > get<0>(t2);
	}
	else {
		if (get<1>(t1) != get<1>(t2)) {
			return get<1>(t1) < get<1>(t2);
		}
		else {
			if (get<2>(t1) != get<2>(t2)) {
				return get<2>(t1) > get<2>(t2);
			}
			else {
				return get<3>(t1) < get<3>(t2);
			}
		}
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<tuple<int, int, int , string>> v;
	for (int i = 0; i < n; i++) {
		string name;
		int k, e, m;
		cin >> name >> k >> e >> m;
		v.push_back(make_tuple(k, e, m , name));
	}
	sort(v.begin(), v.end(), cp);
	for (int i = 0; i < n; i++) {
		cout << get<3>(v[i]) << "\n";
	}
	return 0;
}