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

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    n--;
    int p = k / n;
    if (k - p * n == 0) {
        cout << k + p - 1 << " " << k + p;
    }
    else {
        cout << k + p << " " << k + p;
    }
}