#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    long long sol = 0;
    for (int k = 0; k < t; k++) {
        int a, b, c;
        cin >> a >> b >> c;
        long long maxx;
        if (a == b && b == c) {
            maxx = 10000 + a * 1000;
        }
        else if (a == b) {
            maxx = 1000 + a * 100;
        }
        else if (b == c) {
            maxx = 1000 + b * 100;
        }
        else if (a == c) {
            maxx = 1000 + c * 100;
        }
        else {
            long long m = max({a, b, c});
            maxx = 100 * m;
        }
        //cout << maxx << "\n";
        sol = max(maxx, sol);
        //cout << sol << "\n";
    }
    cout << sol;
    return 0;
}