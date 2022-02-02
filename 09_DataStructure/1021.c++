#include <iostream>
#include <deque>

using namespace std;

int main(int argc, char** argv) {

	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> d;
	int n, m;
	int left, right;
	int count = 0;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		d.push_back(i);
	}


	while (m--) {
		int num;
		cin >> num;

		for (int i = 0; i < d.size(); i++) {

			if (d[i] == num) {
				left = i;
				right = d.size() - i;
				break;

			}
		}

		if (left <= right) {
			while (1) {
				if (d.front() == num)
					break;

				d.push_back(d.front());
				d.pop_front();
				count++;

			}
			d.pop_front();
		}

		else {
			count++;
			while (1) {
				if (d.back() == num)
					break;

				d.push_front(d.back());
				d.pop_back();
				count++;

			}
			d.pop_back();
		}

	}

	cout << count;

	return 0;
}

/*
	int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	deque <int> d;
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		d.push_back(i);
	}

	int count = 0;
	while (m--) {
		int num;
		cin >> num;
		int save;
		for (int i = 0; i < d.size(); i++) {
			if (d[i] == num) {
				save = i;
				break;
			}
		}

		if (save < d.size() - save) {
			while (1) {
				if (num == d.front()) {
					d.pop_front();
					break;
				}
				count++;
				d.push_back(d.front());
				d.pop_front();
				
			}
			
		}

		else {
			while (1) {
				if (num == d.front()) {
					d.pop_back();
					break;
				}
				count++;
				d.push_front(d.back());
				d.pop_back();
				
			}
			
		}
	}

	cout << count;
	return 0;
}
*/

//https://iingang.github.io/posts/BOJ-1021/