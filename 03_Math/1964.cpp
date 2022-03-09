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

int main(void)
{
    g();
    ll n;
    cin >> n;
    ll sum = 5;
    if (n == 1) {
        cout << sum;
    }
    else {
        for (ll i = 2; i <= n; i++) {
            sum += i * 3 + 1;
        }
        cout << sum % 45678;
    }
}