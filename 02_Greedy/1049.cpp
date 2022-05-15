#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    int n, m, sol, p, q, X, Y;
    cin >> n >> m;
    int set = 1e9, alo = 1e9;
    while (m--) {
        int a, b;
        cin >> a >> b;
        set = min(set, a);
        alo = min(alo, b);
    }
    p = n / 6;
    q = n % 6;
    sol = min(p * set + q * alo, min(set * (p + 1), alo * n));
    cout << sol;
}