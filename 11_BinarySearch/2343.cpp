#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

ll a[MAX];
ll n, m;
bool p(ll k) {
    int cnt = 1;
    // cnt는 m과 비교해주기 위한 변수!
    ll sum = 0;
    // 우리가 구하고자 하는 블루레이의 최소값!
    for (int i = 0; i < n; i++) {
        if (a[i] > k) return false;
        if (sum + a[i] > k) {
            // sum에다가 새로운 a[i]를 더했을때,
            // mid값을 초과하면, cnt를 더해주고
            // sum을 초과하는 새로운 a[i]로 초기화해준다ㅎㅎ
            cnt++;
            sum = a[i];
        }
        else {
            sum += a[i];
        }
    }
    return cnt <= m;
}

int main(void)
{
    z();
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll s = 0;
    ll f = 1e9;
    ll sol;
    while (s + 1 < f) {
        ll mid = (s + f) / 2;
        if(p(mid)) {
            f = mid;
            sol = mid;
        }
        else {
            s = mid;
        }
        
    }
    cout << sol;
}