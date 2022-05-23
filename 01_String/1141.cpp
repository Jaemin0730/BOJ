#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define pr pair<int, int>

int main(void)
{
    u;
    int n;
    cin >> n;
    string a[n];   // 문자열 받아서 넣어두는 곳!
    bool b[n] = {}; // 문자열이 포함되면 1, 포함 X면 0
    // b[n]은 기본 세팅이 false
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // 문자열 다 정렬
    sort(a, a + n);
    /*
    for (int i = 0; i < n; i++) {
        cout << a[i] << "???\n";
    }
    */
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j].substr(0, a[i].size()) == a[i]) {
                // 0~a[i] 사이즈만큼 문자열과 a[j]가 같으면 해당케이스 X
                // cout << a[i] << "!!\n";
                b[i] = true;
                // 해당한 케이스는 true로 제외시켜주자!
                break;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        // cout << i << " " << b[i] << "\n";
        // 해당 케이스가 true로 제외한거니까,
        // 우리가 찾을 값은 false의 개수!!!
        if (b[i] == false) {
            cnt++;
        }
    }
    cout << cnt;
}