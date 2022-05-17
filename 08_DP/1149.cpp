#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define p pair<int, int>

int main(void)
{
    u;
    int n, a, b, c;
    cin >> n;
    int dp[1001][3] = {};
    // 색깔 3개
    dp[0][0] = 0; // a
    dp[0][1] = 0; // b
    dp[0][2] = 0; // c
    for (int i = 1; i <= n; i++) {
        cin >> a >> b >> c;
        // i-1과 i의 색이 무조건 달라야됨 + 최솟값을 가져와야됨
        dp[i][0] = a + min(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = b + min(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = c + min(dp[i - 1][0], dp[i - 1][1]);
    }
    cout << min(dp[n][0], min(dp[n][1], dp[n][2]));
}