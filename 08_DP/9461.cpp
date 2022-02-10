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

    int t;
    cin>>t;

    long long int dp[101];
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    for (int j = 4; j <= 100; j++)
    {
        dp[j] = dp[j - 3] + dp[j - 2];
    }

    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cout<<dp[n]<<"\n";
    }
    return 0;
}