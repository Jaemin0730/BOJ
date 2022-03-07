#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;
#define ll long long
void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int n, m;
int p[1001][1001] = {0};
int v[1001] = {0};
int cnt = 0;

void dfs(int num) {
    v[num] = 1;
    for (int i = 1; i <= n; i++) {
        if (p[num][i] == 1 && v[i] == 0)
        {
            dfs(i);
        }
    }
}

int main(void)
{
    g();
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        p[x][y] = p[y][x] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (v[i] != 1) {
            cnt++;
            dfs(i);
        }
    }
    cout << cnt;
}