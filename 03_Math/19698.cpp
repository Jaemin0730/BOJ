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
    int n, w, h, l;
    cin >> n >> w >> h >> l;
    cout << min((w / l) * (h / l), n);
}