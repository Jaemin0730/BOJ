#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int dp[501][501]={0,};
int arr[501][501];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> arr[i][j];
        }
    }

    dp[1][1] = arr[1][1];
    int sol = dp[1][1];

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i][j] = arr[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j]);
            sol = max(sol, dp[i][j]);
        }
    }
    cout << sol;
    return 0;
}