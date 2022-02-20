
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

ll dp[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    dp[1] = 1;
    dp[2] = 3;
    dp[3] = 4;
    for (ll i = 3; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
    } 
    cout << dp[n];

    return 0;
}