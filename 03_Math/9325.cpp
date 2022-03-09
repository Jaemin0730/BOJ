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
    for (int i = 0; i < t; i++) {
        int sol = 0;
        int s;
        cin >> s;
        sol += s;
        int n;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int a, b;
            cin >> a >> b;
            sol += a * b;
        }
        cout << sol << "\n";
    }
}