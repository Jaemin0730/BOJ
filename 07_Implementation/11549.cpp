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
    int v[5];
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        cin >> v[i];
        if (v[i] == n) {
            cnt++;
        }
    }
    cout << cnt;
}