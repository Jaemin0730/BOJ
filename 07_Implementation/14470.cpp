#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define p pair<int, int>

int main(void)
{
    u
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if (a < 0) {
         cout << -1 * a * c + d + e * b << '\n';
    }
    else if (a > 0) {
         cout << e * (b-a) << '\n';
    }
    else {
         cout << d + e * b << '\n';
    }
    
}