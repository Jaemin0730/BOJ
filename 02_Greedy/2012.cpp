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
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    ll sol = 0;
    for (int i = 1; i <= n; i++) {
        sol += abs(i - v[i - 1]);
    }
    cout << sol;
}