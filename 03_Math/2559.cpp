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

ll arr[100001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }
    ll sol = sum;
    for (int i = 0; i <= n - k; i++) {
        sol = max(sol, sum);
        sum += arr[i + k];
        sum -= arr[i];
    }
    cout << sol;
}