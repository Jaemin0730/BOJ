#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MM 1000000009
void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

ll dp[100001][4];

ll play (int n) {
    for (int i = 4; i <= n; i++) {
        // 1, 2, 3의 합으로 구성해야되는데, 1 2 3 연속 XX!
        dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % MM;
        dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % MM;
        dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % MM;
    }
    return (dp[n][1] + dp[n][2] + dp[n][3]) % MM;
}

int main(void)
{
    z();
    int n;
    cin >> n;
    dp[1][1] = 1;
    dp[1][2] = 0;
    dp[1][3] = 0;
    dp[2][1] = 0;
    dp[2][2] = 1;
    dp[2][3] = 0;
    dp[3][1] = 1;
    dp[3][2] = 1;
    dp[3][3] = 1;
    for (int i = 0; i < n; i++) {
        ll k;
        cin >> k;
        // DP -> 함수를 사용해서 푸는 습관 가지자!!
        cout << play(k) << "\n";
    }
}