#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <list>
#include <cmath>
#include <set>
using namespace std;
#define ll long long

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    z();
    ll n, m;
    cin >> n;
    ll a[10000];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    cin >> m;
    if (sum <= m) {
        cout << a[n - 1];
    }
    else {
        ll low = 0;
        ll high = a[n - 1];
        ll mid;
        ll sol;
        while (low <= high)
        {
            ll save = 0;
            mid = (low + high) / 2;
            //cout << mid << "!!\n";
            for (int i = 0; i < n; i++)
            {
                if (a[i] > mid) {
                    save += mid;
                }
                else {
                    save += a[i];
                }
            }
            if (save <= m) {
                low = mid + 1;
                sol = mid;
                // 이 경우의 mid가 정답이기에 sol에다가 저장해줌!!
            }
            else {
                high = mid - 1;
                // 이때의 mid는 정답이 아님 ㅠㅠ
            }
        }
        cout << sol;
    }
}