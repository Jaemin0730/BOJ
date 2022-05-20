#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    int cnt = 0, n;
    cin >> n;
    int dp[n + 1];
    // 7 5 2 1
    /*
    while (1) {
        if (n - 7 >= 0) {
            cnt++;
            n -= 7;
            cout << n << "!!\n";
        }
        else if (n - 5 >= 0) {
            cnt++;
            n -= 5;
            cout << n << "!!\n";
        }
        else if (n - 2 >= 0) {
            cnt++;
            n -= 2;
            cout << n << "!!\n";
        }
        else if (n - 1 >= 0) {
            cnt++;
            n -= 1;
            cout << n << "!!\n";
        }
        else {
            cout << cnt;
            break;
        }
    }
    */
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    dp[4] = 2;
    dp[5] = 1;
    dp[6] = 2;
    dp[7] = 1;
    for (int i = 8; i <= n; i++) {
        // 해당되는 i 차례에 7,5,3,1 중 최소 값을 찾고, 거기서 멈추지 않고 
        // 본인 차례니까 + 1을 해줘야 되는데, 안 해주어서 처음에 오류발생 ㅠㅠ
        dp[i] = min({dp[i - 7], dp[i - 5], dp[i - 2], dp[i - 1]}) + 1;
        //cout << dp[i] << "!\n";
    }
    cout << dp[n];
}