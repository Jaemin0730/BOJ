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
    int a = 0, b = 0;
    for (int i = 3; i > 0; i--)
    {
        cin >> n;
        a += n * i;
    }
    for (int i = 3; i > 0; i--)
    {
        cin >> n;
        b += n * i;
    }
    if (a > b)
        cout << 'A' << '\n';
    else if (a < b)
        cout << 'B' << '\n';
    else
        cout << 'T' << '\n';
}