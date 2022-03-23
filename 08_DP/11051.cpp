#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <list>
#include <cmath>
#include <set>
using namespace std;
#define ll long long

void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int n, k;
ll dp[1001][1003] = {0};

int main(void)
{
    g();
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i) {
                dp[i][j] = 1;
                continue;
            }
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
        }
    }
    cout << dp[n][k];
}