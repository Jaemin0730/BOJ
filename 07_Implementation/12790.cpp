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

vector<int> v;

int main(void)
{
    g();
    int n, x, y, z, t, p, q, e, r;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y >> z >> t >> p >> q >> e >> r;
        int xp = max(1, x + p);
        int yq = max(1, y + q);
        int ze = max(0, z + e);
        int tr = t + r;
        int sol = xp + yq * 5 + ze * 2 + 2 * tr;
        cout << sol << "\n";
    }
}