#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define p pair<int, int>

int main(void)
{
    u;
    int n, sol;
    cin >> n;
    int a[n] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int k = a[0];
    // 구하고자 하는 값은 최소값이니까!
    for (int i = 1; i <= n; i++) {
        int temp;
        if (k * (i + 1) > a[i]) {
            temp = a[i] / (i + 1);
            k = temp;
        }
    }
    cout << k;
}