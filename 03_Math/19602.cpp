#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long

int main(void)
{
    u;
    int a, b, c, k;
    cin >> a >> b >> c;
    k = 3 * c + 2 * b + a;
    if (k >= 10)
        cout << "happy";
    else {
        cout << "sad";
    }
}