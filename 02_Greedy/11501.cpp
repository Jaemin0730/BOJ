#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define p pair<int, int>

int main(void)
{
    u;
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll sum = 0;
        int maxx = 0;
        // 처음에는 오름차순으로 시도,
        // 문제 : 최대 이익에서 해당 순서 값 빼는게 어려움
        // 해결 : 내림차순으로 시도하여, 최대이익(maxx)에서
        //       해당 순서의 값을 빼도록 코드 구성
        //       If) NEW 최대 이익이 등장하면
        //       maxx를 NEW 최대이익으로 변경해주고 이어서 계산!
        for (int i = n-1; i >= 0; i--) {
            maxx = max(maxx, a[i]);
            //cout << maxx << " " << a[i] << "\n";
            sum += maxx - a[i];
        }
        cout << sum << "\n";
    }
}