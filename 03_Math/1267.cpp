#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <cmath>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int m = 0;
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        y += (num / 30 + 1) * 10;
        m += (num / 60 + 1) * 15;
    }
    if (m > y)
    {
        cout << "Y " << y;
    }
    else if (m < y)
    {
        cout << "M " << m;
    }
    else if (m == y)
    {
        cout << "Y M " << y;
    }

    return 0;
}