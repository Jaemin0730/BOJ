#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int k = i;
        while(10 <= k){
            if(k % 10 == 3 || k % 10 == 6 || k % 10 == 9) cnt++;
            k /= 10;
        }
        if(k % 10 == 3 || k % 10 == 6 || k % 10 == 9) cnt++;
    }
    cout << cnt;
}