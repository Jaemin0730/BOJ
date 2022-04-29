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

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    z();
    int t;
    cin >> t;
    int acnt = 0, bcnt = 0;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a > b) {
            acnt++;
        }
        else if (a < b) {
            bcnt++;
        }
    }
    cout << acnt << " " << bcnt;
}