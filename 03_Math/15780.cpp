#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define p pair<int, int>

int main(void)
{
    u;
    int n, k;
    cin >> n >> k;
    int sol = 0;
    while (k--) {
        int m;
        cin >> m;
        if (m % 2 == 0) {
            sol += m / 2;
        }
        else {
            sol += m / 2 + 1;
        }
    }
    if (sol >= n) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

}