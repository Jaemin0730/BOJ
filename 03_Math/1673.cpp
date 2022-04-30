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
    int n, k;
    while (scanf("%d %d", &n, &k) != EOF)
    {
        int a = 0, c = n, s = 0;
        while (c) {
            a += c;
            s += c;
            c = 0;
            c += s / k;
            s %= k;
        }
        cout << a <<'\n';
    }
}