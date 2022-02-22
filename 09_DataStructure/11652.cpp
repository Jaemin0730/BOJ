#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;
#define ll long long

map<ll, int> m;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        m[k]++;
    }
    ll sol = 0;
    int num = 0;
    map<ll, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        if (it->second > num)
        {
            num = it->second;
            sol = it->first;
        }
        if (it->second == num && sol > it->first) {
            sol = it->first;
        }
    }

    cout << sol;
}