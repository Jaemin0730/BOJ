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

int v[1000001];

int main(void)
{
    g();
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v, v + n);
    int k;
    cin >> k;
    /*
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (k - v[i] == v[j]) {
                cnt++;
            }
        }
    }
    */
    int b = 0;
    int e = n - 1;
    while (b < e) {
        if (v[b] + v[e] > k) {
            e--;
        }
        else if (v[b] + v[e] < k) {
            b++;
        }
        else {
            cnt++;
            b++;
            e--;
        }
    }
    cout << cnt;
}