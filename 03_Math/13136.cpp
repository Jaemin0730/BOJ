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
    ll r, c, n, x, y;
    cin >> r >> c >> n;
    if (r % n)
        x = r / n + 1;
    else
        x = r / n;
    if (c % n)
        y = c / n + 1;
    else
        y = c / n;
    cout << x * y;
}