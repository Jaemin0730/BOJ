#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    int a,b,c;
    cin >> a >> b >> c;
    int q = 11 + 11 * 60 + 11 * 60 * 24;
    int r = (c + b * 60 + a * 60 * 24) - q;
    if (r < 0) {
        cout << "-1\n";
    }
    else {
        cout << r << "\n";
    }
}