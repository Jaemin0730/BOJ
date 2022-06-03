#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    string s;
    cin >> s;
    for (int i = s.length() - 1; i >= 0; i--) {
        cout << s[i];
    }
}