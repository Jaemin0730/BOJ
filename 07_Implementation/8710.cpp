#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    ll k, w, m;
    cin >> k >> w >> m;
    ll a = 0;
    while (k < w) {
        k += m;
        a++;
    }
    cout << a;
}