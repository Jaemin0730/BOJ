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

    int dp[1001][2];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int r, g, b;
        cin >> r >> g >> b;

        dp[i][0] = min({r, g, b});

        if (dp[i][0] == r) 
        {
            dp[i][1] == 0;
        }
        else if (dp[i][0] == g)
        {
            dp[i][1] == 1;
        }
        else if (dp[i][0] == b)
        {
            dp[i][1] == 2;
        }

        if (dp[i][1] == dp[i - 1][1])
        {
        }
    }
    
    cout << sum;
    return 0;
}