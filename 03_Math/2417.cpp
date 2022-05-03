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
    ll n;
    cin >> n;
    ll q = sqrt(n);
    if (q * q < n) {
        q++;
    }
    cout << q;
}