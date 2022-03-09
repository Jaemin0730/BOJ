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
        map<string, int> m;
        int n;
        cin >> n;
        int sol = 1;
        for (int j = 0; j < n; j++) {
            string name, cg;
            cin >> name >> cg;
            m[cg]++;
        }
        map<string, int>::iterator it;
        for (it = m.begin(); it != m.end(); it++) {
            sol *= it->second + 1;
        }
        cout << sol - 1 << "\n";
    }
}