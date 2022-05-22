#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define p pair<int, int>

int main(void)
{
    u;
    int n;
    while (cin >> n) {
        ll k = 0;
        for (int i = 1; i <= n; i++) {
            k = k * 10 + 1;
            k %= n;
            // 1, 11, 111 .... 이 n으로 나눠지는지 확인해야된다.
            if (k == 0) {
                // 1 , 11, 111 등의 k를 n으로 나눈 나머지가 0이 될때를 찾아야됨!
                cout << i << "\n";
                break;
                // 그때의 자릿수인 i를 출력하자!!!!
            }
        }
    }
}