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

int n;
int L[21];
int J[21];
int sol = 0;

void re(int c, int h, int p) {
    if (h <= 0) return;
    if (c == n) {
        sol = max(sol, p);
        return;
    }
    re(c + 1, h, p);
    re(c + 1, h - L[c], p + J[c]);
}

int main(void)
{
    g();
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> L[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> J[i];
    }
    re(0, 100, 0);
    cout << sol;
}