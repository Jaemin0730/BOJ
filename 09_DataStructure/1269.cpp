#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 200000

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

map<int, bool> mp;
int n, m;

int main(void)
{
    z();
    cin >> n >> m;
    int sum = n + m;
    for (int i = 0; i < sum; i++)  {
        int k;
        cin >> k;
        if (mp[k] == true) {
            mp.erase(k);
        }
        else {
            mp[k] = true;
        }
    }
    cout << mp.size();
}