#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    int a, b, c;
    cin >> a >> b;
    c = a * (100 - b) / 100;
    //cout << c << "\n";
    if (c >= 100) {
        cout << 0;
    }
    else {
        cout << 1;
    }
}