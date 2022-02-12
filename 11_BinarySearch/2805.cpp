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

ll arr[1000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll m;
    ll sol = 0;
    ll maxx = 0;

    cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        maxx = max(maxx, arr[i]);
    }

    ll left = 1;
    ll right = maxx - 1;
    ll mid;
    ll sum;
    while (left <= right) {
        mid = (left + right) / 2;
        sum = 0;
        for (ll i = 0; i < n; i++) {
            if (arr[i] > mid) {
                sum += (arr[i] - mid);
            }
        }
        if (sum >= m) {
            left = mid + 1;
            sol = max(sol, mid);
        }
        else {
            right = mid - 1;
        }
    }
    cout << sol;

    return 0;
}