#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    string s;
    char c[10] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    while (1) {
        int sum = 0;
        getline(cin, s);
        if (s == "#") {
            break;
        }
        for (int i = 0; i < s.size(); i++) {
			if (s[i] == c[0]) sum++;
			if (s[i] == c[1]) sum++;
			if (s[i] == c[2]) sum++;
			if (s[i] == c[3]) sum++;
			if (s[i] == c[4]) sum++;
			if (s[i] == c[5]) sum++;
			if (s[i] == c[6]) sum++;
			if (s[i] == c[7]) sum++;
			if (s[i] == c[8]) sum++;
			if (s[i] == c[9]) sum++;
		}
        cout << sum << "\n";
    }
}