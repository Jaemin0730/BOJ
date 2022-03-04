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

int n, m;
vector<int> a(n);
vector<int> b(m);
vector<int> v;

int main(void)
{
    g();
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        b.push_back(num);
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++) {
        if (!binary_search(b.begin(), b.end(), a[i])) {
            v.push_back(a[i]);
        }
    }
    sort(v.begin(), v.end());
    if (v.size() == 0) {
        cout << 0;
    }
    else {
        cout << v.size() << "\n";
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
}