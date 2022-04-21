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
    int a[1001] = {0};
    int sum = 0;
    int maxx = -1;
    int sol;
    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;
        sum += n;
        a[n]++;
        if (maxx < a[n])
        {
            maxx = a[n];
            sol = n;
        }
    }
    cout << sum / 10 << "\n" << sol;
}