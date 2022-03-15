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
#include <iomanip>
using namespace std;
#define ll long long

void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

ll dp[100001];

int main(int argc, char **argv)
{
    g();
    int n;
    cin >> n;
    dp[1] = 3;
    dp[2] = 7;
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 2] + dp[i - 1] * 2) % 9901;
    }
    cout << dp[n];
}