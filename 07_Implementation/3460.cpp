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
    int t;
    int n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int d = 0;
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                cout << d << " ";
            }
            n /= 2;
            d++;
        }
    }
}