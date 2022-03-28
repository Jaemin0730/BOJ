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
    double a, b, c;
    cin >> a >> b >> c;
    double x, y;
    x = a * b / c;
    y = a / b * c;
    ll sol = max(x, y);
    cout << sol;
}

//"/n"