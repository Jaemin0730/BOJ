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
    int t;
    cin >> t;
    if (t == 2) {
        int a, b;
        cin >> a >> b;
        int p = max(a, b);
        for (int i = 1; i <= p; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                cout << i << "\n";
            }
        }
    }
    else {
        int a, b, c;
        cin >> a >> b >> c;
        int p = max(a, max(b, c));
        for (int i = 1; i <= p; i++)
        {
            if (a % i == 0 && b % i == 0 && c % i == 0)
            {
                cout << i << "\n";
            }
        }
    }
}