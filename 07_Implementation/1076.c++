#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	string c;
	
	long long int result = 0;
	for (int i = 0; i < 3; i++) {
		cin >> c;
		if (i == 0) {
			if (c == "black") {
				result += 0;
			}
			else if (c == "brown") {
				result += 1;
			}
			else if (c == "red") {
				result += 2;
			}
			else if (c == "orange") {
				result += 3;
			}
			else if (c == "yellow") {
				result += 4;
			}
			else if (c == "green") {
				result += 5;
			}
			else if (c == "blue") {
				result += 6;
			}
			else if (c == "violet") {
				result += 7;
			}
			else if (c == "grey") {
				result += 8;
			}
			else if (c == "white") {
				result += 9;
			}
		}
		else if (i == 1) {
			if (c == "black") {
				result = result * 10 + 0;
			}
			else if (c == "brown") {
				result = result * 10 + 1;
			}
			else if (c == "red") {
				result = result * 10 + 2;
			}
			else if (c == "orange") {
				result = result * 10 + 3;
			}
			else if (c == "yellow") {
				result = result * 10 + 4;
			}
			else if (c == "green") {
				result = result * 10 + 5;
			}
			else if (c == "blue") {
				result = result * 10 + 6;
			}
			else if (c == "violet") {
				result = result * 10 + 7;
			}
			else if (c == "grey") {
				result = result * 10 + 8;
			}
			else if (c == "white") {
				result = result * 10 + 9;
			}
		}
		else if (i == 2) {
			if (c == "black") {
				result *= 1;
			}
			else if (c == "brown") {
				result *= 10;
			}
			else if (c == "red") {
				result *= 100;
			}
			else if (c == "orange") {
				result *= 1000;
			}
			else if (c == "yellow") {
				result *= 10000;
			}
			else if (c == "green") {
				result *= 100000;
			}
			else if (c == "blue") {
				result *= 1000000;
			}
			else if (c == "violet") {
				result *= 10000000;
			}
			else if (c == "grey") {
				result *= 100000000;
			}
			else if (c == "white") {
				result *= 1000000000;
			}
		}
	}
	cout << result;
	return 0;
}