#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;
#define ll long long
vector<int> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll num;
        cin >> num;
        cout << upper_bound(v.begin(), v.end(), num) - lower_bound(v.begin(), v.end(), num) << " ";
    }
    return 0;
}