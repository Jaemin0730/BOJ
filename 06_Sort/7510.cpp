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

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    z();
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int v[3];
        for (int j = 0; j < 3; j++) {
            cin >> v[j];
        }
        sort(v, v + 3);
        cout << "Scenario #" << i + 1 << ":" << "\n";
        if (v[2] * v[2] == (v[0] * v[0] + v[1] * v[1]))
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
        cout << "\n";
    }
}