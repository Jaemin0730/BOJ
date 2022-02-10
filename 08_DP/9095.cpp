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

    int dp[12];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i <= 11; i++){
        dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
    }

    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        cout << dp[num] << "\n";
    }
        return 0;
}