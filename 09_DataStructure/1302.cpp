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

map<string, int> m;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m[s]++;
    }
    string sol;
    int maxx = 0;
    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        if (it->second > maxx) {
            maxx = it->second;
            sol = it->first;
        }
    }
    cout << sol;
}