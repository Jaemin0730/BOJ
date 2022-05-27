#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    int n, a[1000];
    cin >> n;
    int cnt = 0, k = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0 && k == 0) {
            cnt++;
            k = 1;
        }
        if (a[i] == 1 && k == 1) {
            cnt++;
            k = 2;
        }
        if (a[i] == 2 && k == 2) {
            cnt++;
            k = 0;
        }
    }
    cout << cnt;
}