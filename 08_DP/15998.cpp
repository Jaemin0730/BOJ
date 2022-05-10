#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MM 1000000009
void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

ll dp[1000001];

ll play (int n) {
    for (int i = 4; i <= n; i++){
        dp[i] = (dp[i - 3] + dp[i - 2] + dp[i - 1]) % MM;
    }
    return dp[n];
}

int main()
{
    z();
    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        cout << play(num) << "\n";
    }
}