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

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int x, y;
    for (int i = 1; i <= n; i++) {
        if (a * i >= n) {
            x = i * b;
            break;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (c * i >= n) {
            y = i * d;
            break;
        }
    }
    int sol = min(x, y);
    cout << sol;
}