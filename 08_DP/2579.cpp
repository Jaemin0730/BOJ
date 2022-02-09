#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int dp[301];
    int s[301];

    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        s[i] = num;
    }

    dp[1] = s[1];
    dp[2] = s[1] + s[2];
    dp[3] = max(s[1], s[2]) + s[3];
    for (int i = 4; i <= n; i++)
    {
        dp[i] = s[i] + max(dp[i - 2], dp[i - 3] + s[i - 1]);
    }

    cout << dp[n] << "\n";
    return 0;
}