#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(a, b / 2 + c);
}