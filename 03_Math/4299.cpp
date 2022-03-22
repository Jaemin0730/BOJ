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
    int x, y, a, b;
    cin >> x >> y;
    a = (x + y) / 2;
    b = (x - y) / 2;
    if ((x + y) % 2 != 0 || (x - y) % 2 != 0)
        cout << -1 << '\n';
    else
    {
        if (a >= 0 && b >= 0)
        {
            if (a >= b)
                cout << a << ' ' << b << '\n';
            else
                cout << b << ' ' << a << '\n';
        }
        else
            cout << -1 << '\n';
    }
}