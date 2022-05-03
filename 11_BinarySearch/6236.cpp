#include <bits/stdc++.h>
using namespace std;
#define ll long long

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int n, m;
int a[100000];

bool p (int k) {    // k == mid
    int sum = k;
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] > k) return false;
        // k보다 큰 a[i]가 나오면 잘못된 경우!
        if (sum - a[i] < 0) {
        // 합에서 a[i]를 뺀 경우가 0보다 작은 음수일 때에는,
        // 통장에서 돈을 빼와야되기 때문에 cnt를 더해주고 sum을 다시 mid로 초기화해준다.
            cnt++;
            sum = k;
        }
        /* 
            -------- else 써서 한번 틀렸었는데, --------
            밑에 sum -= a[i]는 반복문을 돌때 항상 실행시켜야되는 코드이고,
            if를 만족한다고 실행시키는게 아니기에, else를 쓰지 않고
            항상 작동하도록 if문에서 빼서 코드를 작성해줘야 된다!
            ------------------------------------------
        */
        sum -= a[i];
    }
    return cnt <= m;
}

int main(void)
{
    z();
    cin >> n >> m;
    int sum = 0, sol;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    // 밑에는 늘 사용되는 이분탐색 코드!
    // bool을 쓰는 습관을 길러보자!!!!
    
    int s = 1;
    int t = sum;
    while (s <= t) {
        int mid = (s + t) / 2;
        if (p(mid)) {
            t = mid - 1;
            sol = mid;
        }
        else {
            s = mid + 1;
        }
    }
    cout << sol;
}