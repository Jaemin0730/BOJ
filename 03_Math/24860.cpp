#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    ll v1, j1, v2, j2, v, d, j;
    cin >> v1 >> j1 >> v2 >> j2 >> v >> d >> j;
    cout << (v * j * d) * (v1 * j1 + v2 * j2);
}