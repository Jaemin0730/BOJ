#include <bits/stdc++.h>
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
    int n;
    cin >> n;
    ll sum = 0;
    /*
    밑에 방법으로 시도했는데, 시간초과 오류 발생ㅠㅠ
    -----------------------------------------------------------
    int i = 0, j = 0;
    for (i = 1; i <= n; i++) {
        for (j = 1; j * j < i; j++) {
            if (i % j == 0) {
                sum += j;
                // 약수들 중 앞에 부분을 더해준다.
                sum += i / j;
                // 그 앞부분과 곱해지는 약수(뒷부분)를 더해준다.
            }
        }
        if (j * j == i) {
        // 제곱수인 경우에는 해당 경우를 "한번만!!" 더해준다.
            sum += j;
        }
    }
    cout << sum;
    -----------------------------------------------------------
    */
    for (int i = 1; i <= n; i++) {
        sum += i * (n / i);
    }
    cout << sum;
}