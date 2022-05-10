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
    int n, k;
    cin >> n;
    int a[n] = {};
    for (int i = 0; i < n; i++) {
        cin >> k;
        for (int j = 0; j < n; j++) {
            if (k == 0 && a[j] == 0) {
                a[j] = i + 1;
                break;
            }
            else if (a[j] == 0) {
                k--;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}