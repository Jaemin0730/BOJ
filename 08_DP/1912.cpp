#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;
#define ll long long

ll dp[100001];
ll v[100001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> v[i];
    }

    /*
    dp[0] = v[1];
    for (ll i = 1; i <= n; i++) {
        ll tmp = 0;
        ll sol = v[1];
        for (ll j = i; j >= 1; j--) {
            tmp += v[j];
            sol = max(sol, tmp);
        }
        dp[i] = max(dp[i - 1], sol);
    }
    cout << dp[n];
    */
    dp[1] = v[1];
    ll sol = dp[1];
    for (ll i = 2; i <= n; i++) {
        dp[i] = max(dp[i - 1] + v[i], v[i]);
        sol = max(sol, dp[i]);
    }
    cout << sol;

}