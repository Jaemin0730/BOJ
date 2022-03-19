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
    int s[5] = {};
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x > 0 && y > 0)
            s[1]++;
        else if (x < 0 && y > 0)
            s[2]++;
        else if (x < 0 && y < 0)
            s[3]++;
        else if (x > 0 && y < 0)
            s[4]++;
        else {
            s[0]++;
        }
    }
    for (int i = 1; i <= 4; i++) {
        cout << "Q" << i << ": " << s[i];
        cout << "\n";
    }
    cout << "AXIS: " << s[0];
}