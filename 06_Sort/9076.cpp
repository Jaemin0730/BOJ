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
    int t;
    cin >> t;
    while (t--) {
        int a[5];
        int big = 0, sml = 1e9, sum = 0;
        for (int i = 0; i < 5; i++) {
            cin >> a[i];
        }
        sort(a, a + 5);
        for (int i = 1; i < 4; i++) {
            big = max(big, a[i]);
            sml = min(sml, a[i]);
            sum += a[i];
        }
        if (big - sml >= 4) {
            cout << "KIN\n";
        }
        else {
            cout << sum << "\n";
        }
    }
}