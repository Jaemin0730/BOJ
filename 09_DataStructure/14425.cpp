#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;
#define ll long long
void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

ll n;
map<string, int> m;

int main(void)
{
    g();
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    for (ll i = 0; i < n - 1; i++)
    {
        string s;
        cin >> s;
        m[s]--;
    }
    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->second == 1)
        {
            cout << it->first;
            break;
        }
    }
}