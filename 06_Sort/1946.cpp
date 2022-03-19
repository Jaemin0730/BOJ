#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <list>
#include <cmath>
#include <set>
using namespace std;
#define ll long long

void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    g();
    int t;
    cin >> t;
    for (int k = 0; k < t; k++) {
        vector<pair<int, int>> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            v.push_back(make_pair(x, y));
        }
        sort(v.begin(), v.end());
        int sol = 1;
        int p = v[0].second;
        for (int i = 0; i < n; i++) {
            if (v[i].second < p) {
                p = v[i].second;
                sol++;
            }
        }
        cout << sol;
        cout << "\n";
    }
}