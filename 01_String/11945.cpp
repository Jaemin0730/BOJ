#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    int n,m;
    cin >> n >> m;
    char a[10][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = m - 1; j >= 0; j--) {
            cout << a[i][j];
        }
        cout << "\n";
    }
}