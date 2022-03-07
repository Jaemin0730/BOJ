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

int main(void)
{
    g();
    int t;
    cin >> t;
    cout << fixed;
    cout.precision(1);

    for (int i = 0; i < t; i++) {
        int n;
        int c = 0;
        double g = 0.0;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int cc;
            double gg;
            cin >> cc >> gg;
            c += cc;
            g += gg * cc;
        }
        cout << c << " " << g/c << "\n";
    }
}