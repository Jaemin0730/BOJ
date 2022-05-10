#include <bits/stdc++.h>
using namespace std;
#define ll long long

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

ll dp[10001][3];

ll play (int n) {
    for (int i = 4; i <= n; i++) {
        dp[i][1] = dp[i - 1][1];
        dp[i][2] = dp[i - 2][1] + dp[i - 2][2];
        dp[i][3] = dp[i - 3][1] + dp[i - 3][2] + dp[i - 3][3];
    }
    return dp[n][1] + dp[n][2] + dp[n][3];
}

int main()
{
    z();
    int n;
    cin >> n;
    dp[1][1] = 1;
    dp[1][2] = 0;
    dp[1][3] = 0;
    dp[2][1] = 1;
    dp[2][2] = 1;
    dp[2][3] = 0;
    dp[3][1] = 1;
    dp[3][2] = 1;
    dp[3][3] = 1;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        cout << play(num) << "\n";
    }
}