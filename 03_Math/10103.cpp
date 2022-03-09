#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
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
    int a = 100;
    int b = 100;
    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        if (x > y) {
            b -= x;
        }
        else if (x < y) {
            a -= y;
        }
        //cout << a << "\n";
        //cout << b << "\n";
    }
    cout << a << "\n";
    cout << b << "\n";
}