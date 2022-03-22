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
#include <tuple>
using namespace std;
#define ll long long

void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

struct pot {
    int a, b, c, s;
};

bool compare (pot x, pot y)
{
    if (x.a == y.a && x.b == y.b) return x.c < y.c;
    if (x.a == y.a) return x.b < y.b;
    return x.a > y.a;
}

int main(void)
{
    g();
    int n;
    cin >> n;
    vector<pot> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].a >> v[i].b >> v[i].c;
        v[i].s = i + 1;
    }
    sort(v.begin(), v.end(), compare);
    cout << v[0].s;
}