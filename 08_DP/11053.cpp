#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int dp[1001];
int arr[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int sol = 0;
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j <= i - 1; j++) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        sol = max(sol, dp[i]);
    }
    cout << sol;

    return 0;
}