#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    int n;
    cin >> n;
    cout << (n - 1) * (n - 2) * (n - 3) / 6;
}