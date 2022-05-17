#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define p pair<int, int>

int main(void)
{
    u;
    int n, m;
    cin >> n >> m;
    ll a[n], sol = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (m--) {
        sort(a, a + n);
        // 작은값 ~ 큰값으로 정렬해주기
        ll x = a[0];
        ll y = a[1];
        // 작은값 2개를 더해서 0번째 1번째에 두 합을 넣어주기
        a[0] = x + y;
        a[1] = x + y;
    }
    for (int i = 0; i < n; i++) {
        sol += a[i];
        //cout << a[i] << "!!\n";
    }
    cout << sol;
}