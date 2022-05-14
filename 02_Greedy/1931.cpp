#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define p pair<int, int>

int main(void)
{
    u;
    int n;
    cin >> n;
    vector<p> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].second >> v[i].first;
        //cout << v[i].first << " " << v[i].second << "????\n";
    }
    sort(v.begin(), v.end());
    int cnt = 0, save = 0;
    for (int i = 0; i < n; i++) {
        if (save <= v[i].second) {
            save = v[i].first;
            cnt++;
            //cout << v[i].first << " " << v[i].second << "!!!!\n";
        }
    }
    cout << cnt;
}