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
    int o = 0;
    int t = 0;
    for (int i = 0; i < 3; i++) {
        int n;
        cin >> n;
        if (n == 1) {
            o++;
        }
        else {
            t++;
        }
    }
    if (o > t) {
        cout << 1;
    }
    else {
        cout << 2;
    }
}