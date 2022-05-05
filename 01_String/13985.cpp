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
    char a[10];
    cin.getline(a,10);
    if ((a[0] - '0') + (a[4] - '0') == (a[8] - '0'))
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}