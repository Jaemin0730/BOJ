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

    int max = 0;
    int s = 0;
    for (int i = 0; i < 10; i++)
    {
        int x, y;
        cin >> x >> y;

        s += y - x;

        if (s > max)
        {
            max = s;
        }
    }
    cout << max;

    return 0;
}