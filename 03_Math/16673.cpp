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

vector<int> v;

int main(void)
{
    g();
    int s = 0;
    int c, k, p;
    cin >> c >> k >> p;
    for (int i = 1; i <= c; i++) {
        s += k * i + p * i * i;
    }
    cout << s;
}