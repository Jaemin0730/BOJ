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

vector<int> v;

int main(void)
{
    g();
    int t, n;
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    int sol = 1;
    sort(v.begin(), v.end());
    /*
    int p = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] - p + 1 > t) {
            //cout << v[i] << "\n";
            //cout << p << "\n";
            sol++;
            p = v[i];
        }
    }
    */
    int p = t - 1;
    for (int i = 1; i < n; i++) {
        if (v[i] - v[i - 1] <= p) {
            p -= v[i] - v[i - 1];
        }
        else {
            sol++;
            p = t - 1;
        }
    }
    cout << sol;
}