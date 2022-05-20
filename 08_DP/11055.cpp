#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define p pair<int, int>

int dp[1001];
int arr[1001];

int main(void)
{
    u;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int sol = 0;
    for (int i = 1; i <= n; i++) {
        dp[i] = arr[i];
        for (int j = 1; j < i; j++) {
            // i번째랑 j번째만 비교하면 5 3 6 이런거 놓칠수 있음ㅠㅠ -> 사실 내가 놓침ㅎㅎ
            // 그래서 dp[i]를 누적시킨 값보다 j번째 dp값에다가 i번째 배열값을 더한 숫자가 클때,
            // 그 큰 값으로 dp[i]를 다시 초기화 해주고, for문이 끝나면 dp[n]값을 sol로 보낸다!
            if (arr[i] > arr[j] && dp[i] < dp[j] + arr[i]) {
                dp[i] = dp[j] + arr[i];
                //cout << dp[i] << " ";
            }
        }
        //cout << "\n";
        if (sol < dp[i]) {
            sol = dp[i];
        }
        //cout << sol << "??\n";
    }
    cout << sol;
}