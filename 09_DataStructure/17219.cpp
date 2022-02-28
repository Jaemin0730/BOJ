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
using namespace std;
#define ll long long

map<string, string> mp;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string link;
        string ps;
        cin >> link >> ps;
        mp[link] = ps;
    }
    for (int i = 0; i < m; i++) {
        string link;
        cin >> link;
        cout << mp[link] << "\n";
    }
}