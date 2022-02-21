#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;
#define ll long long

ll sum[100001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    sum[0] = 0;
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        sum[i] = sum[i - 1] + num;
    }
    for (int i = 0; i < m; i++) {
        
        int a, b;
        cin >> a >> b;
        cout << sum[b] - sum[a - 1] << "\n";
    }
}