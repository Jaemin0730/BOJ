#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define pr pair<int, int>

int main(void)
{
    u;
    int t;
    cin >> t;
    while (t--) {
        int a, b, p, q;
        cin >> a >> b;
        p = b - (a - b);
        q = a - b;
        cout << p << " " << q << "\n";
    }
}