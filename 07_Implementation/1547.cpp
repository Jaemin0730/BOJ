#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cin >> m;

    int k = 1;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        if (k == x)
        {
            k = y;
        }
        else if (k == y)
        {
            k = x;
        }
    }

    cout << k;

    return 0;
}