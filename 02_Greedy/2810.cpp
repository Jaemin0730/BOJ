#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define p pair<int, int>

int main(void)
{
    u;
    int n;
    string s;
    cin >> n >> s;
    int cnt = 1;
    // 무조건 왼쪽 자리에 하나는 있음!!
    int l = 0;
    // 커플석 2자리일때마다 오른쪽에 하나 생김!
    // 일반석은 자리마다 하나 생김 -> S일때 cnt++해주자!!
    for (int i = 0; i < n; i++) {
        if (s[i] == 'S') {
            cnt++;
        }
        else {
            l++;
            // L일때는 l을 더해줘서 2일때 조건문 해주자
            if (l == 2) {
                cnt++;
                l = 0;
                // 2개인 조건 확인했으면 다시 0으로 초기화 해주자!!
            }
        }
    }
    if (cnt > n) {
    // n보다 클수는 없어서 그 경우는 n으로 출력해주자
        cout << n;
    }
    else {
        cout << cnt;
    }
}