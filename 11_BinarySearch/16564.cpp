#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

ll a[MAX];

int main(void)
{
    z();
    ll n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    ll low = a[0];
    ll high = a[0] + k;
    ll mid;
    ll sol;
    while (low <= high) 
    {
        mid = (low + high) / 2;
        ll s = 0;
        for (int i = 0; i < n; i++) {
            if (mid > a[i]) {
                s += (mid - a[i]);
            }
            else {
                break;
            }
        }
        if (s <= k) {
            low = mid + 1;
            // sol이 정답인데,
            // s가 k보다 작을때 가장 큰 경우가 mid이기 때문에,
            // 이 경우에서 무조건 mid를 sol로 넣어준다!!
            // 혹시 else 경우로 while문이 돌 수 있는데,
            // 그때는 잘못된 경우라서 중단 될 경우, 그 mid값을 출력하면
            // 오류이기 때문이다!
            sol = mid;
            //cout << mid << "??\n";
        }
        else {
            high = mid - 1;
            //cout << mid << "!!\n";
        }
    }
    cout << sol;
}