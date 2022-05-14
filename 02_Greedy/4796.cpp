#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define pa pair<int, int>

int main(void)
{
    u;
    int n = 1;
    while (1) {
        int P, L, V;
        cin >> L >> P >> V;
        if (L == 0 && P == 0 && V == 0) {
            break;
        }
        int sol = V - (V / P) * P;
        //cout << sol << "!!\n";
        sol += L * (V / P);
        //cout << sol << "??\n";
        cout << "Case " << n << ": " << sol << "\n";
        n++;
    }
}