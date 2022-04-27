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
    int a[3], b[3], sol = 0;
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < 3; i++) {
        if(a[i] < b[i]) sol += b[i] - a[i];
    }
    cout << sol;
}